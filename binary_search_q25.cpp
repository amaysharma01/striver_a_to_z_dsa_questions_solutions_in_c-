#include<bits/stdc++.h>
using namespace std;
double func(vector<int> &num1, vector<int> &num2)
{
    int n=num1.size();
    int m=num2.size();
    if (n>m)
    {
        return func(num2,num1);
    }
    int low=0;
    int high=n;
    while (low<=high)
    {
        int mid1=low+(high-low)/2;
        int mid2=(n+m+1)/2-mid1;
        int l1=(mid1==0?INT_MIN:num1[mid1-1]);
        int r1=(mid1==n?INT_MAX:num1[mid1]);
        int l2=(mid2==0?INT_MIN:num2[mid2-1]);
        int r2=(mid2==m?INT_MAX:num2[mid2]);

        if (l1<=r2 && l2<=r1)
        {
            if ((n+m)%2==0)
            {
                return (max(l1,l2)+min(r1,r2))/2.0;
            }
            else
            {
                return max(l1,l2);
            }
        }
        if (l1>r2)
        {
            high=mid1-1;
        }
        else
        {
            low=mid1+1;
        }
    }
    return 0;
}
int main()
{
    vector<int> a = { -5, 3, 6, 12, 15 };
    vector<int> b = { -12, -10, -6, -3, 4, 10 };
    cout<<"The median of two sorted array is = "<<func(a,b);
    return 0;
}