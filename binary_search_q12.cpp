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
        if (nums[mid]>nums[mid+1])
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
    vector<int> nums={1,2,3,4,5,6,7,8,5,1};
    cout<<"Peak Element in array = "<<func(nums);
    return 0;
}