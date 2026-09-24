#include<bits/stdc++.h>
using namespace std;
bool func(vector<vector<int>> &nums, int target)
{
    int n=nums.size();
    int m=nums[0].size();
    int low=0,high=n*m-1;
    while (low<=high)
    {
        int mid=low+(high-low)/2;
        int mid_element=nums[mid/m][mid%m];
        if (mid_element==target)
        {
            return true;
        }
        else if (mid_element<target)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    return false;
}
int main()
{
    vector<vector<int>> mat ={{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    int  target = 8;
    if (func(mat,target))
    {
        cout<<"True";
    }
    else
    {
        cout<<"False";
    }
    return 0;
}