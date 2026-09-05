#include<bits/stdc++.h>
using namespace std;
int func(vector<int> &arr, int k)
{
    int n=arr.size();
    int left=0;
    int right=0;
    int maxlen=0;
    int sum=arr[0];
    while (right<n)
    {
        while (left<=right && sum>k)
        {
            sum=sum-arr[left];
            left++;
        }
        if (sum==k)
        {
            maxlen=max(maxlen,right-left+1);
        }
        right++;
        if (right<n)
        {
            sum=sum+arr[right];
        }
    }
    return maxlen;
}
int main()
{
    vector<int> arr={10, 5, 2, 7, 1, 9};
    int k=15;
    cout<<"Longets Subarray with sum "<<k<<" "<<func(arr,k);
    return 0;
}