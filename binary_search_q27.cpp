#include<bits/stdc++.h>
using namespace std;
int lower_bound(vector<int> &arr, int n, int k)
{
    int low=0;
    int high=n;
    int ans=n;
    while (low<=high)
    {
        int mid=low+(high-low)/2;
        if (arr[mid]<=k)
        {
            ans=mid;
            low=mid+1;
        }
        else
        {
        high=mid-1;
        }
    }
    return ans;
}
int func(vector<vector<int>> &nums1)
{
    int n=nums1.size();
    int m=nums1[0].size();
    int index=-1,cnt_max=-1;
    for (int i=0;i<n;i++)
    {
        int cnt_ones=m-lower_bound(nums1[i],m,1);
        if (cnt_ones>cnt_max)
        {
            index=i;
            cnt_max=cnt_ones;
        }
    }
    return  index;
}
int main()
{
    vector<vector<int>> mat = {
        {0, 0, 1, 1},
        {0, 1, 1, 1},
        {0, 0, 0, 1}
    };

    cout<<"Maximum number of ones present in 2-D array = "<<func(mat);
    return 0;
}