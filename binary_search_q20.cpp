#include<bits/stdc++.h>
using namespace std;
bool isplace(vector<int> &stall, int distance, int cows)
{
    int count=1;
    int last=stall[0];
    for (int i=1;i<stall.size();i++)
    {
        if (stall[i]-last>=distance)
        {
            count++;
            last=stall[i];
        }
    }
    if (count>=cows)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int func(vector<int> &stall, int cows)
{
    sort(stall.begin(),stall.end());
    int left=0;
    int n=stall.size()-1;
    int right=stall[n-1]-stall[0];
    while (left<=right)
    {
        int mid=left+(right-left)/2;
        if (isplace(stall,mid,cows)==1)
        {
            left=mid+1;
        }
        else
        {
            right=mid-1;
        }
    }
    return right;
}
int main()
{
    vector<int> stalls={0,3,4,7,10,9};
    int k=4;
    cout<<"The maximum distance form minimum distance to place four cows is "<<func(stalls,k);
    return  0;
}