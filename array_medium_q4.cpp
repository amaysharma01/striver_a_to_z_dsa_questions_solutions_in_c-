#include<bits/stdc++.h>
using namespace std;
int func(vector<int> &arr)
{
    int n=arr.size();
    int max_sum=INT_MIN;
    int sum=0;
    for (int i=0;i<n;i++)
    {
        sum=sum+arr[i];
        if (sum>max_sum)
        {
            max_sum=sum;
        }
        else if (sum<0)
        {
            sum=0;
        }
    }
    return max_sum;
}
int main()
{
    vector<int> arr={2, 3, 5, -2, 7, -4};
    cout<<"The maximum subarray = "<<func(arr);
    return 0;
}