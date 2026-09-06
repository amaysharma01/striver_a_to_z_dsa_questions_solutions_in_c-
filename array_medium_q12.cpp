#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> arr={
        { 1, 2, 3, 4 },
        { 5, 6, 7, 8 },
        { 9, 10, 11, 12 },
        { 13, 14, 15, 16 }
    };
    vector<int> result;
    int top=0,bottom=arr.size();
    int left=0,right=arr[0].size();
    while (top<bottom && left<right)
    {
        for (int i=left;i<right;i++)
        {
            result.push_back(arr[top][i]);
        }
        top++;
        for (int i=top;i<bottom;i++)
        {
            result.push_back(arr[i][right-1]);
        }
        right--;
        if (top<bottom)
        {
            for (int i=right-1;i>=left;i--)
            {
                result.push_back(arr[bottom-1][i]);
            }
            bottom--;
        }
        if (left<right)
        {
            for (int i=bottom-1;i>=top;i--)
            {
                result.push_back(arr[i][left]);
            }
            left++;
        }
    }
    cout<<"spiral order traversal of matrix  = ";
    for(int i=0;i<result.size();i++)
    {
        cout<<result[i]<<" ";
    }
    return 0;
}