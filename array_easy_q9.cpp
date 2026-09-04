#include<bits/stdc++.h>
using namespace std;
vector<int> func(vector<int> &arr1, vector<int> &arr2)
{
    int n=arr1.size();
    int m=arr2.size();
    vector<int> temp;
    int i=0,j=0;
    while (i<n && j<m)
    {
        if (arr1[i]<=arr2[j])
        {
            if (temp.empty()==1|| temp.back()!=arr1[i])
            {
                temp.push_back(arr1[i]);
            }
            i++;
        }
        else if (arr2[j]<arr1[i])
        {
            if (temp.empty()==1|| temp.back()!=arr2[j])
            {
                temp.push_back(arr2[j]);
            }
            j++;
        }
    }
    while (i<n)
    {
        if (temp.empty()||temp.back()!=arr1[i])
        temp.push_back(arr1[i]);
        i++;
    }
    while (j<m)
    {
        if (temp.empty()||temp.back()!=arr2[j])
        temp.push_back(arr2[j]);
        j++;
    }
    return temp;
}
int main()
{
    vector<int> arr1= {1,2,3,4,5};
    vector<int> arr2= {2,3,4,4,5};
    arr1=func(arr1,arr2);
    cout<<"union of two sorted array"<<endl;
    for (int i=0;i<arr1.size();i++)
    {
        cout<<arr1[i]<<" ";
    }
    return 0;
}