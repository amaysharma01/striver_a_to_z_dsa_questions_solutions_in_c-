#include<bits/stdc++.h>
using namespace std;
int func(vector<int> &nums, int target)
{
    int n=nums.size();
    int left=0,right=n-1;
    while (left<=right)
    {
        int mid=left+(right-left)/2;
        if (nums[mid]==target)
        {
            return mid+1;
        }
        else if (nums[mid]>target)
        {
            right=mid-1;
        }
        else
        {
            left=mid+1;
        }
    }
    return -1;
}
int main()
{
    vector<int> arr={3, 4, 6, 7, 9, 12, 16, 17};
    int target=6;
    int position=func(arr,target);
    if (position==-1)
    {
        cout<<"Not found";
    }
    else
    {
        cout<<"found at position "<<position<<endl;
    }
    return 0;
}