#include<bits/stdc++.h>
using namespace std;
void func(vector<int> &arr)
{
    int n=arr.size();
    int temp=arr[n-1];
    for (int i=n-1;i>0;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[0]=temp;
}
int main()
{
    vector<int> arr={1,2,3,4,5};
    cout<<"Left rotated array = ";
    func(arr);
    for (int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}