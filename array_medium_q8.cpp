#include<bits/stdc++.h>
using namespace std;
vector<int> func(vector<int> &arr)
{
    int Max=INT_MIN;
    int n=arr.size();
    vector<int> temp;
    for (int i=n-1;i>=0;i--)
    {
        if (arr[i]>Max)
        {
            temp.push_back(arr[i]);
            Max=max(Max,arr[i]);
        }
    }
    sort(temp.begin(),temp.end());
    return temp;
}
int main()
{
    vector<int> arr={4, 7, 1, 0};
    vector<int> ans=func(arr);
    for (int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}