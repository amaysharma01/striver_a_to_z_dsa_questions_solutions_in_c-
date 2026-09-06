#include<bits/stdc++.h>
using namespace std;
int func(vector<int> &arr)
{
    int n=arr.size();
    int maxi=0;
    unordered_map<int,int> temp;
    temp[0]=1;
    int sum=0;
    for (int i=0;i<n;i++)
    {
        sum=sum+arr[i];
        if (sum==0)
        {
            maxi=i+1;
        }
        else if (temp.find(sum)!=temp.end())
        {
            maxi=max(maxi,i-temp[sum]);
        }
        else
        {
            temp[sum]=i;
        }
    }
    return maxi;
}
int main()
{
    vector<int> arr={9, -3, 3, -1, 6, -5};
    cout<<"The longest sub array with given sum  = "<<func(arr);
    return 0;
}