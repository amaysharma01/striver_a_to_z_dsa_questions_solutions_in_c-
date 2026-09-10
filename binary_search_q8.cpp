#include<bits/stdc++.h>
using namespace std;
int func(vector<int> &nums, int k)
{
    int n=nums.size();
    int left=0;
    int right=n-1;
    while (left<=right)
    {
        int mid=left+(right-left)/2;
        if (nums[mid]==k)
        {
            return mid;
        }
        if (nums[left]<=nums[mid])
        {
            if (nums[left]<=k && k<=nums[mid])
            {
                right=mid-1;
            }
            else
            {
                left=mid+1;
            }
        }
        else if (nums[mid]<=nums[right])
        {
            if (nums[mid]<=k && k<=nums[right])
            {
                left=mid+1;
            }
            else
            {
                right=mid-1;
            }
        }
    }
    return -1;
}
int main()
{
    vector<int> nums= {4,5,6,7,0,1,2};
    int target = 0;
    cout<<target<<" is placed at index "<<func(nums,target);
    return 0;
}