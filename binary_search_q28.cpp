#include<bits/stdc++.h>
using namespace std;
bool Search(vector<int> &arr, int target)
{
    int low=0;
    int high=arr.size()-1;
    while (low<=high)
    {
        int mid=low+(high-low)/2;
        if (arr[mid]==target)
        {
            return true;
        }
        else if (arr[mid]<target)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    return false;
}
int func(vector<vector<int>> &nums, int target)
{
    int n=nums.size();
    int m=nums[0].size();
    for (int i=0;i<n;i++)
    {
        if (Search(nums[i],target))
        {
            return true;
        }
    }
    return false;
}
int main()
{
    vector<vector<int>> mat = { {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12} }; 
    int target = 8;
    cout<<func(mat,target);
    return 0;
}