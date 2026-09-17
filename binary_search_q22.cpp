#include<bits/stdc++.h>
using namespace std;
int isplace(vector<int> &nums, int capacity)
{
    int count=1;
    int sum=0;
    for (auto num:nums)
    {
        if (sum+num>capacity)
        {
            count++;
            sum=num;
        }
        else
        {
            sum=sum+num;
        }
    }
    return count;
}
int func(vector<int> &nums, int k)
{
    int n=nums.size();
    int left=*max_element(nums.begin(),nums.end());
    int right=accumulate(nums.begin(),nums.end(),0);
    while (left<=right)
    {
        int mid=left+(right-left)/2;
        int ans=isplace(nums,mid);
        if (ans>k)
        {
            left=mid+1;
        }
        else
        {
            right=mid-1;
        }
    }
    return left;
}
int main()
{
    vector<int> nums={1,2,3,4,5}; 
    int k = 3;
    cout<<func(nums,k);
    return 0;
}