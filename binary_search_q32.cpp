#include<bits/stdc++.h>
using namespace std;
int func(vector<vector<int>> &nums)
{
    int rows=nums.size();
    int col=nums[0].size();

    int left=nums[0][0];
    int right=nums[0][col-1];

    for (int i=1;i<rows;i++)
    {
        left=min(left,nums[i][0]);
        right=max(right,nums[i][col-1]);
    }

    int total=(rows*col)/2;

    while (left<right)
    {
        int mid=left+(right-left)/2;
        int count=0;
        for (int i=0;i<rows;i++)
        count += (int)(upper_bound(nums[i].begin(),nums[i].end(),mid)-nums[i].begin());
        if (count>total)
        {
            right=mid;
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
     vector<vector<int>> mat = {
        {1, 3, 5},
        {2, 6, 9},
        {3, 6, 9}
    };
    cout<<"The median is "<<func(mat);
    return 0;
}