#include<bits/stdc++.h>
using namespace std;
int func(vector<int> &nums, int k)
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
        else if (nums[mid]<k)
        {
            left=mid+1;
        }
        else if (nums[mid]==k)
        {
            index=mid;
            break;
        }
        index=mid;
    }
    return index;
}
int main()
{
    vector<int> nums={1,2,4,7};
    int target=2;
    cout<<func(nums,target);
    return 0;
}