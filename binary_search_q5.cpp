#include<bits/stdc++.h>
using namespace std;
int floor(vector<int> &nums, int k)
{
    int n=nums.size();
    int left=0;
    int right=n-1;
    int index=-1;
    while (left<=right)
    {
        int mid=left+(right-left)/2;
        if (nums[mid]>k)
        {
            right=mid-1;
        }
        else if (nums[mid]==k)
        {
            return nums[mid];
        }
        else if (nums[mid]<k)
        {
            index=nums[mid];
            left=mid+1;
        }
    }
    return index;
}
int ceil(vector<int> &nums, int k)
{
    int n=nums.size();
    int left=0;
    int right=n-1;
    int index=-1;
    while (left<=right)
    {
        int mid=left+(right-left)/2;
        if (nums[mid]>k)
        {
            index=nums[mid];
            right=mid-1;
        }
        else if (nums[mid]==k)
        {
            return nums[mid];
        }
        else if (nums[mid]<k)
        {
            left=mid+1;
        }
    }
    return index;
}
int main()
{
    vector<int> nums={3, 4, 4, 7, 8, 10};
    int target=5;
    int f=floor(nums,target);
    int c=ceil(nums,target);
    cout<<"Floor value is "<<f<<" Ceil value is "<<c<<endl;
    return 0;
}