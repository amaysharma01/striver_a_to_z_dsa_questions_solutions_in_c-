#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> func(vector<vector<int>> &nums)
{
    vector<vector<int>> ans;
    for (auto it:nums)
    {
        if (ans.empty()||ans.back()[1]<it[0])//not overlapping the interval
        {
            ans.push_back(it);
        }
        else// overlapping the interval 
        {
            ans.back()[1]=max(ans.back()[1],it[1]);
        }
    }
    return ans;
}
int main()
{
    vector<vector<int>> intervals = {
        {1, 3}, {2, 6}, {8, 10}, {15, 18}
    };
    vector<vector<int>> result = func(intervals);
    for (auto it:result)
    {
        cout<<it[0]<<","<<it[1]<<" ";
    }
    return 0;
}