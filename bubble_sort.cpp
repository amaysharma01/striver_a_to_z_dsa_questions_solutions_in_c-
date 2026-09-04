#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr={13,46,24,52,20,9};
    cout<<"array after the sort = ";
    for (int i=arr.size()-1;i>=0;i--)
    {
        for (int j=0;j<=i-1;j++)
        {
            if (arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for (int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}