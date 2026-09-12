#include<bits/stdc++.h>
using namespace std;
int func(int n, int m)
{
    int left=1;
    int right=m;
    while (left<=right)
    {
        int mid=left+(right-left)/2;
        int ans=1;
        for (int i=0;i<n;i++)
        {
            ans=ans*mid;
            if (ans>m)
            {
                break;
            }
        }
        if (ans==m)
        {
            return mid;
        }
        else if (ans>mid)
        {
            right=mid-1;
        }
        else
        {
            left=mid+1;
        }
    }
    return -1;
}
int main()
{
    cout<<func(3,27);
    return 0;
}