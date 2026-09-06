#include<bits/stdc++.h>
using namespace std;
int func(vector<int> &arr, int k)
{
    int sum=0,count=0;
    unordered_map<int, int > temp;
    temp[0]=1;
    for (int i=0;i<arr.size();i++)
    {
        sum=sum+arr[i];
        int remove=sum-k;
        if (temp.find(remove)!=temp.end())
        {
            count=count+temp[remove];
        }
        temp[sum]++;
    }
    return count;
}
int main()
{
    vector<int> arr = {3, 1, 2, 4};
    int k=6;
    cout<<"No of sub array with given sum = "<<func(arr,k);
    return 0;
}