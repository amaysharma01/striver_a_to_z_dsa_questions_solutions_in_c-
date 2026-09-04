#include<bits/stdc++.h>
using namespace std;
void merge(vector<int> &arr, int left, int mid, int right)
{
    int low=left;
    int high=mid+1;
    vector<int> temp;
    while (low<=mid && high<=right)
    {
        if (arr[low]<=arr[high])
        {
            temp.push_back(arr[low]);
            low++;
        }
        else
        {
            temp.push_back(arr[high]);
            high++;
        }
    }
    while (low<=mid)
    {
        temp.push_back(arr[low]);
        low++;
    }
    while (high<=right)
    {
        temp.push_back(arr[high]);
        high++;
    }
    for (int i=left;i<=right;i++)
    {
        arr[i]=temp[i-left];
    }
}
void merge_sort(vector<int> &arr, int left, int right)
{
    if(left>=right)
    {
        return;
    }
    int mid=left+(right-left)/2;
    merge_sort(arr,left,mid);
    merge_sort(arr,mid+1,right);
    merge(arr,left,mid,right);
}
int main()
{
    vector<int> arr={13,46,24,52,20,9};
    cout<<"array after sorting  = ";
    merge_sort(arr,0,arr.size()-1);
    for (int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}