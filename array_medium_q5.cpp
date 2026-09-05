#include<bits/stdc++.h>
using namespace std;
int func(vector<int> &arr)
{
    int n=arr.size();
    int max_profit=0;
    int cost;
    for (int i=0;i<n-1;i++)
    {
        for (int j=i+1;j<n;j++)
        {
            cost=arr[j]-arr[i];
            max_profit=max(max_profit,cost);
        }
    }
    return max_profit;
}
int main()
{
    vector<int> arr={7,1,5,3,6,4};
    cout<<"Max profit = "<<func(arr);
    return 0;
}