#include<bits/stdc++.h>
using namespace std;
bool ischeck(vector<int> &nums, int days, int k, int m)
{
    int cnt=0,bouquest=0;
    for (int i=0;i<nums.size();i++)
    {
        if (nums[i]<=days)
        {
            cnt++;
            if (cnt==k)
            {
                bouquest++;
                cnt=0;
            }
        }
        else
        {
            cnt=0;
        }
    }
    return bouquest>=m;
}
int func(vector<int> &nums, int k, int m)
{
    long long total=1LL*k*m;
    int ans=-1;
    if (total>nums.size())
    {
        return -1;
    }
    int left=*min_element(nums.begin(),nums.end());
    int right=*max_element(nums.begin(),nums.end());
    while (left<=right)
    {
        int mid=left+(right-left)/2;
        if (ischeck(nums,mid,k,m))
        {
            ans=mid;
            right=mid-1;
        }
        else
        {
            left=mid+1;
        }
    }
    return ans;
}
int main()
{
    vector<int> nums= {7, 7, 7, 7, 13, 11, 12, 7};
    int  m = 2, k = 3;
    cout<<"The minimum days to make a bouquests = "<<func(nums,k,m);
    return 0;
}