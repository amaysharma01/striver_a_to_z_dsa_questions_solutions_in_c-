#include<bits/stdc++.h>
using namespace std;
int func(vector<int> &arr)
{
    int n=arr.size();
    n++;
    int Sum=(n*(n+1)/2);
    int sum=0;
    for (int i=0;i<arr.size();i++)
    {
        sum=sum+arr[i];
    }
    return Sum-sum;
}
int main()
{
    vector<int> arr={8, 2, 4, 5, 3, 7, 1};
    cout<<"Missing number in array = "<<func(arr);
    return 0;
}