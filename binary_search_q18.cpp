#include<bits/stdc++.h>
using namespace std;
int ischeck(vector<int> &nums, int capacity)
{
    int package=0;
    int days=1;
    for (auto w:nums)
    {
        if (w+package>capacity)
        {
            days++;
            package=w;
        }
        else
        {
            package+=w;
        }
    }
    return days;
}
int func(vector<int> &nums, int days)
{
    int n=nums.size();
    int left=*max_element(nums.begin(),nums.end());
    int right=accumulate(nums.begin(),nums.end(),0);
    while (left<=right)
    {
        int mid=left+(right-left)/2;
        if (ischeck(nums,mid)<=days)
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
     vector<int> weights = {5,4,5,2,3,4,5,6};

    // Define number of days within which packages must be shipped
    int d = 5;

    cout<<"Minimum capacity of ship to port the package in "<<d<<" days is "<<func(weights,d);
    return 0;
}