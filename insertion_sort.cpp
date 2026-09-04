#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr={13,46,24,52,20,9};
    for (int i=1;i<arr.size();i++)
    {
        int key=arr[i];
        int j=i-1;
        while (j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    cout<<"array after the sorting is = ";
    for (int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
}