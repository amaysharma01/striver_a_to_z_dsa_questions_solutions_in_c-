#include<bits/stdc++.h>
using namespace std;
vector<int> func(vector<int> &arr)
{
    int n=arr.size();
    sort(arr.begin(),arr.end());
    int i=0;
    for (int j=i+1;j<n;j++)
    {
        if (arr[i]!=arr[j])
        {
            i++;
            arr[i]=arr[j];
        }
    }
    i++;
    arr.erase(arr.begin()+i,arr.end());
    return arr;
}
int main()
{
    vector<int> arr={13,46,24,52,20,24,52,9,9};
    arr=func(arr);
    cout<<"remove duplicates from the array = ";
    for (int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}