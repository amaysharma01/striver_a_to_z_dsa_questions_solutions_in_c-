#include<bits/stdc++.h>
using namespace std;
void func(vector<int> &arr, int d)
{
    if (d==0)
    {
        return;
    }
    reverse(arr.begin(),arr.begin()+d);
    reverse(arr.begin()+d,arr.end());
    reverse(arr.begin(),arr.end());
}
int main()
{
    vector<int> arr={1, 2, 3, 4, 5, 6, 7};
    int k=2;
    cout<<"Rotate Array the "<<k<<" places ";
    func(arr,k);
    for (int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}