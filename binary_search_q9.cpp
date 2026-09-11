#include<bits/stdc++.h>
using namespace std;
int func(vector<int> &nums)
{
    int n=nums.size();
    int left=0;
    int right=n-1;
    while (left<=right)
    {
        int mid=left+(right-left)/2;
        if (nums[left]<nums[mid])
        {
            right=mid-1;
        }
        else
        {
            left=mid+1;
        }
    }
    return left;
}
int main()
{
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    cout<<"The Minimum Element in an Roated Sorted Array = "<<func(nums);
    return 0;
}