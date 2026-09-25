#include<bits/stdc++.h>
using namespace std;
int Search_max_element(vector<vector<int>> &a, int n, int col)
{
    int index=-1;
    int max_element=-1;
    for (int i=0;i<n;i++)
    {
        if (a[i][col]>=max_element)
        {
            index=i;
            max_element=a[i][col];
        }
    }
    return index;
}
vector<int>  func(vector<vector<int>> &nums)
{
    int n=nums.size();
    int m=nums[0].size();
    int low=0,high=m-1;
    while (low<=high)
    {
        int mid=low+(high-low)/2;
        int max_row=Search_max_element(nums,n,mid);
        int left=(mid-1>=0?nums[max_row][mid-1]:-1);
        int right=(mid+1<m?nums[max_row][mid+1]:-1);

        if (nums[max_row][mid]>=left && nums[max_row][mid]>=right)
        {
            return {max_row,mid};
        }
        else if (nums[max_row][left]<left)
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    return {-1,-1};
}
int main()
{
     vector<vector<int>> mat = {
        {10, 20, 15},
        {21, 30, 14},
        {7, 16, 32}
    };
    vector<int> result=func(mat);
    cout<<"the peak element is present at index = "<<result[0]<<result[1];
    return 0;
}