#include<bits/stdc++.h>
using namespace std;
int merge(vector<int> &nums , int left, int mid, int right)
{
    int low=left;
    int high=mid+1;
    int cnt=0;
    vector<int> temp;
    while (low<=mid && high<=right)
    {
        if (nums[low]<=nums[high])
        {
            temp.push_back(nums[low]);
            low++;
        }
        else
        {
            temp.push_back(nums[high]);
            cnt+=(mid-left+1);
            high++;
        }
    }
    while (left<=mid)
    {
        temp.push_back(nums[left]);
        left++;
    }
    while (high<=right)
    {
        temp.push_back(nums[high]);
        high++;
    }
    for (int i=left;i<=right;i++)
    {
        nums[i]=temp[i-left];
    }
    return cnt;
}
int merge_sort(vector<int> &nums, int left, int right)
{
    int cnt=0;
    if (left>=right)
    {
        return cnt;
    }
    int mid=left+(right-left)/2;
    cnt+=merge_sort(nums,left,mid);
    cnt+=merge_sort(nums,mid+1,right);
    cnt+=merge(nums,left,mid,right);
    return cnt;
}
int func(vector<int> &nums, int n)
{
    return merge_sort(nums,0,n);
}
int main()
{
    vector<int> a = {5, 4, 3, 2, 1};
    cout<<"Number of inversion = "<<func(a,a.size()-1);
    return 0;
}