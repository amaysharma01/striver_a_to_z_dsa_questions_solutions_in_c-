#include<bits/stdc++.h>
using namespace std;
int func(vector<int> &nums, int k)
{
    int n=nums.size();
    int left=0;
    int right=n-1;
    int start=-1;
    while (left<=right)
    {
        int mid=left+(right-left)/2;
        if (nums[mid]==k)
        {
            start=mid;
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
    return start;
}
int main()
{
    vector<int> nums={3, 4, 13, 13, 13, 20, 40};
    int target=13;
    cout<<"The last Occurence of "<< target<<" is "<<func(nums,target);
    return 0;
}