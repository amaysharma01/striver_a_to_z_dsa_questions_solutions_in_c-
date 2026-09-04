#include<bits/stdc++.h>
using namespace std;
void func(vector<int> &arr)
{
    int n=arr.size();
    int j=-1;
    for (int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            j=i;
            break;
        }
    }
    for(int i=j+1;i<n;i++)
    {
        if (arr[i]!=0)
        {
            swap(arr[i],arr[j]);
            j++;
        }
    }
}
int main()
{
    vector<int> arr={ 1 ,0 ,2 ,3 ,0 ,4 ,0 ,1};
    cout<<"Moved zero to the end = ";
    func(arr);
    for (int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}