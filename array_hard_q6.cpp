#include<bits/stdc++.h>
using namespace std;
int func(vector<int> &nums, int k)
{
    int n=nums.size();
    unordered_map<int,int> mpp;
    mpp[0]=1;
    int sum=0;
    int count=0;
    for (int i=0;i<n;i++)
    {
        sum^=nums[i];
        int target=sum^k;
        if (mpp.find(target)!=mpp.end())
        {
            count+=mpp[target];
        }
        mpp[sum]++;
    }
    return count;
}
int main()
{
    vector<int> arr={4, 2, 2, 6, 4};
    int k=6;
    cout<<"Count the number of subarray with given sum k "<<func(arr,k);
    return 0;
}