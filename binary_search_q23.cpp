#include<bits/stdc++.h>
using namespace std;
int isplace(vector<int> &nums, int work)
{
    int painter=1;
    int sum=0;
    for (auto num:nums)
    {
        if (sum+num>work)
        {
            painter++;
            sum=num;
        }
        else
        {
            sum+=num;
        }
    }
    return painter;
}
int func(vector<int> &area, int k)
{
    int left=*max_element(area.begin(),area.end());
    int right=accumulate(area.begin(),area.end(),0);
    while (left<=right)
    {
        int mid=left+(right-left)/2;
        int ans=isplace(area,mid);
        if (ans>k)
        {
            left=mid+1;
        }
        else
        {
            right=mid-1;
        }
    }
    return left;
}
int main()
{
    vector<int> boards= {5, 5, 5, 5};
    int  k = 2;
    cout<<func(boards,k);
    return 0;
}