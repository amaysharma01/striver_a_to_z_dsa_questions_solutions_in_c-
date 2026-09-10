#include<bits/stdc++.h>
using namespace std;
void func(vector<int> &nums1, int n , vector<int> &nums2, int m)
{
    int k=n+m-1;
    int i=n-1;
    int j=m-1;
    while (i>=0 && j>=0)
    {
        if (nums1[i]>=nums2[j])
        {
            nums1[k--]=nums1[i--];
        }
        else
        {
            nums1[k--]=nums2[j--];
        }
    }
    while (j>=0)
    {
        nums1[k--]=nums2[j--];
    }
}
int main()
{
    vector<int> nums1 = {1, 3, 5, 0, 0, 0};
    vector<int> nums2 = {2, 4, 6};
    int m = 3, n = 3;
    func(nums1,n,nums2,m);
    for (auto it:nums1)
    {
        cout<<it<<" ";
    }
    return 0;
}