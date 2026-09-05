#include<bits/stdc++.h>
using namespace std;
vector<int> func(vector<int> &arr)
{
    int n=arr.size();
    vector<int> temp(n,0);
    int pos=0,neg=1;
    for (int i=0;i<n;i++)
    {
        if (arr[i]>=0)
        {
            temp.insert(temp.begin()+pos,arr[i]);
            pos=pos+2;
        }
        else
        {
            temp.insert(temp.begin()+neg,arr[i]);
            neg=neg+2;
        }
    }
    for (int i=0;i<n;i++)
    {
        arr[i]=temp[i];
    }
}
int main()
{
    vector<int> arr={1,2,-4,-5};
    func(arr);
    for (int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}