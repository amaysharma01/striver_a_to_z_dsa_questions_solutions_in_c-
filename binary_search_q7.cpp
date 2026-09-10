#include<bits/stdc++.h>
using namespace std;
int last(vector<int> &nums, int k)
{
    int n=nums.size();
    int left=0,right=n-1;
    int index=-1;
    while (left<=right)
    {
        int mid=left+(right-left)/2;
        if (nums[mid]==k)
        {
            index=mid;
            left=mid+1;
        }
        else if (nums[mid]>k)
        {
            right=mid-1;
        }
        else
        {
            left=mid+1;
        }
    }
    return index;
}
int first(vector<int> &nums, int k)
{
    int n=nums.size();
    int left=0;
    int right=n-1;
    int index=-1;
    while (left<=right)
    {
        int mid=left+(right-left)/2;
        if (nums[mid]==k)
        {
            index=mid;
            right=mid-1;
        }
        else if (nums[mid]>k)
        {
            right=mid-1;
        }
        else
        {
            left=mid+1;
        }
    }
    return index;
}
int main()
{
    vector<int> nums={2, 2 , 3 , 3 , 3 , 3 , 4};
    int target=3;
    int i=last(nums,target);
    int j=first(nums,target);
    cout<<i-j;
    return 0;
}