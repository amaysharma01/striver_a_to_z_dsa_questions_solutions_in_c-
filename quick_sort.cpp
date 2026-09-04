#include<bits/stdc++.h>
using namespace std;
int partition(vector<int> &arr, int left, int right)
{
    int pivot=arr[right];
    int i=left-1;
    for (int j=left;j<right;j++)
    {
        if (arr[j]<=pivot)
        {
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[right]);
    return i+1;
}
void quick_sort(vector<int> &arr, int low, int high)
{
    if (low<high)
    {
        int pivot_index=partition(arr, low, high);
        quick_sort(arr,low,pivot_index-1);
        quick_sort(arr,pivot_index+1,high);
    }
}
int main()
{
    vector<int> arr={13,46,24,52,20,9};
    cout<<"array after the sorting = ";
    quick_sort(arr,0,arr.size()-1);
    for (int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}