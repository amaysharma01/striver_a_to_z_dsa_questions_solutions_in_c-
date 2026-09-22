#include<bits/stdc++.h>
using namespace std;
int numberofstation(vector<int> &nums, long double distance)
{
    int n=nums.size();
    int required=0;
    for (int i=0;i<n-1;i++)
    {
        required+=(int)((nums[i+1]-nums[i])/distance);
    }
    return required;
}
long double func(vector<int> &distance, int k)
{
    int n=distance.size();
    long double low=0;
    long double high=-1;
    for (int i=0;i<n-1;i++)
    {
        high=max(high,(long double)(distance[i+1]-distance[i]));
    }
    while (high-low>1e-6)
    {
        long double mid=low+(high-low)/2;
        if (numberofstation(distance,mid)>k)
        {
            low=mid;
        }
        else
        {
            high=mid;
        }
    }
    return high;
}
int main()
{
    vector<int> nums = {1,2,3,4,5};
    int k = 4;
    cout<<func(nums,k);
    return 0;
}