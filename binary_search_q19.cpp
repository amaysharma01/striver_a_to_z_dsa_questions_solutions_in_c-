#include<bits/stdc++.h>
using namespace std;
int func(vector<int> &nums, int k)
{
    int left=0;
    int right=nums.size()-1;
    while (left<=right)
    {
        int mid=left+(right-left)/2;
        int ans=nums[mid]-(mid+1);
        if (ans<k)
        {
            left=mid+1;
        }
        else
        {
            right=mid-1;
        }
    }
    return right+k+1;
}
int main()
{
    vector <int> nums={4,7,9,10};
    int k = 1;
    cout<<"the "<<k<<" missing number is "<<func(nums,k); 
    return 0;
}