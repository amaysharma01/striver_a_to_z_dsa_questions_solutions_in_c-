#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr={13,46,24,52,20,9};
    for (int i=0;i<arr.size()-1;i++)
    {
        int min=i;
        for (int j=i+1;j<arr.size();j++)
        {
            if (arr[i]>arr[j])
            {
                min=j;
            }
        }
        swap(arr[min],arr[i]);
    }
    cout<<"sorted array are: = ";
    for (int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}