#include<bits/stdc++.h>
using namespace std;
void func(vector<vector<int>> &arr)
{
    int n=arr.size();
    int m=arr[0].size();
    bool first_col=0,first_row=0;
    for (int i=0;i<m;i++)
    {
        if (arr[0][i]==0)
        {
            first_row=1;
            break;
        }
    }
    for (int j=0;j<n;j++)
    {
        if (arr[j][0]==0)
        {
            first_col=1;
            break;
        }
    }
    for (int i=1;i<n;i++)
    {
        for (int j=1;j<m;j++)
        {
            if (arr[i][j]==0)
            {
                arr[i][0]=0;
                arr[0][j]=0;
            }
        }
    }
    for (int i=1;i<n;i++)
    {
        for (int j=1;j<m;j++)
        {
            if (arr[i][0]==0||arr[0][j]==0)
            {
                arr[i][j]=0;
            }
        }
    }
    if (first_col==1)
    {
        for (int i=0;i<n;i++)
        {
            arr[i][0]=0;
        }
    }
    if (first_row==1)
    {
        for (int j=0;j<m;j++)
        {
            arr[0][j]=0;
        }
    }
}
int main()
{
    vector<vector<int>> arr={{0,1,2,0},{3,4,5,2},{1,3,1,5}};
    func(arr);
    for (int i=0;i<arr.size();i++)
    {
        for (int j=0;j<arr[0].size();j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}