#include<bits/stdc++.h>
using namespace std;
void merge(vector<int> &nums, int left, int mid, int right)
{
    int low=left;
    int high=mid+1;
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
            high++;
        }
    }
    while (low<=mid)
    {
        temp.push_back(nums[low]);
        low++;
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
}
int count(vector<int> &nums, int left, int mid, int right)
{
    int high=mid+1;
    int cnt=0;
    for (int i=left;i<=mid;i++)
    {
        while (high<=right && (long long)nums[i]>(long long)2*nums[high])
        {
            high++;
        }
        cnt+=(high-(mid+1));
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
    cnt+=merge_sort(nums,left,mid);// left part
    cnt+=merge_sort(nums,mid+1,right);// right part
    cnt+=count(nums,left,mid,right);// modification
    merge(nums,left,mid,right);// merge 
    return cnt;
}
int func(vector<int> &nums ,  int n)
{
    return merge_sort(nums,0,n);
}
int main()
{
    vector<int> a = {4, 1, 2, 3, 1};
    int n=a.size();
    cout<<"Number of reverse pair is  = "<<func(a,n-1);
    return 0;
}