#include<bits/stdc++.h>
using  namespace std;
int func(vector<int> &num1, vector<int> &num2, int k)
{
    int n=num1.size();
    int m=num2.size();
    if (n>m)
    {
        return func(num2,num1,k);
    }
    int low=max(0,k-m);
    int high=min(n,k);
    while (low<=high)
    {
        int mid1=low+(high-low)/2;
        int mid2=k-mid1;
        int l1=(mid1==0?INT_MIN:num1[mid1-1]);
        int r1=(mid1==n?INT_MAX:num2[mid1]);
        int l2=(mid2==0?INT_MIN:num2[mid2-1]);
        int r2=(mid2==m?INT_MAX:num2[mid2]);

        if (l1<=r2 && l2<=r1)
        {
            return max(l1,l2);
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
     
    vector<int> a = {2, 3, 6, 7, 9};
    vector<int> b = {1, 4, 8, 10};
    int k = 5;
    cout<<"The Kth element in two sorted array is  = "<<func(a,b,k);
    return 0;
}