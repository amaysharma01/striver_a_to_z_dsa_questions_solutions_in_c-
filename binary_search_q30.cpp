#include<bits/stdc++.h>
using namespace std;
bool func(vector<vector<int>> &mat, int target)
{
    int n=mat.size();
    int m=mat[0].size();
    int low=0,high=m-1;
    while (low<n && high>=0)
    {
        if (mat[low][high]==target)
        {
            return true;
        }
        else if (mat[low][high]>target)
        {
            high--;
        }
        else
        {
            low++;
        }
    }
    return false;
}
int main()
{
    vector<vector<int>> matrix = {
        {1, 4, 7, 11, 15}, 
        {2, 5, 8, 12, 19}, 
        {3, 6, 9, 16, 22}, 
        {10, 13, 14, 17, 24}, 
        {18, 21, 23, 26, 30}
    };
    int  target = 5;
    cout<<func(matrix,target);
    return 0;
}