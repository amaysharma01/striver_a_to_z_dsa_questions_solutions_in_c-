#include<bits/stdc++.h>
using  namespace std;
int func(vector<int> &nums)
{
    int n=nums.size()-1;
    int left=0;
    int right=n-1;
    while (left<=right)
    {
        int mid=left+(right-left)/2;
        if (nums[mid]>nums[right])
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
    vector<int> nums={4,5,6,7,0,1,2,3};
    cout<<"Number of times the array is rotated = "<<func(nums); 
    return 0;
}