#include<bits/stdc++.h>
using namespace std;
void func(vector<int> &arr)
{
    int n=arr.size();
    int left=0,mid=0,right=n-1;
    while (mid<=right)
    {
        if (arr[mid]==0)
        {
            swap(arr[mid],arr[left]);
            left++;
            mid++;
        }
        else if (arr[mid]==1)
        {
            mid++;
        }
        else
        {
            swap(arr[mid],arr[right]);
            right--;
        }
    }
}
int main()
{
    vector<int> arr={1, 0, 2, 1, 0};
    cout<<"sort the array ";
    func(arr);
    for (int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}