#include<bits/stdc++.h>
using namespace std;
int ischeck(vector<int> &nums, int div)
{
    int total=0;
    for (int i=0;i<nums.size();i++)
    {
        total+=ceil((double)nums[i]/div);
    }
    return  total;
}
int func(vector<int> &nums,int limit)
{
    int left=1;
    int right=*max_element(nums.begin(),nums.end());
    while (left<=right)
    {
        int mid=left+(right-left)/2;
        if (ischeck(nums,mid)<=limit)
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
    vector<int> nums = {1,2,3,4,5}; 
    int limit = 8;
    cout<<"The minimum number that divides all the number with in a range of given thresold = "<<func(nums,limit);
    return 0;
}