#include<bits/stdc++.h>
using namespace std;
int func(vector<int> &arr)
{
    int n=arr.size();
    int count=0;
    int element;
    for (int i=0;i<n;i++)
    {
        if (count==0)
        {
            element=arr[i];
            count=1;
        }
        else if (element==arr[i])
        {
            count++;
        }
        else if (element!=arr[i])
        {
            count--;
        }
    }
    int count1=0;
    for (int i=0;i<n;i++)
    {
        if (arr[i]==element)
        {
            count1++;
        }
    }
    if (count1>(n/2))
    {
        return element;
    }
    else
    {
        return -1;
    }
}
int main()
{
    vector<int> arr={7, 0, 0, 1, 7, 7, 2, 7, 7};
    int check=func(arr);
    if (check!=-1)
    {
        cout<<"Majority Element is = "<<check;
    }
    else
    {
        cout<<"Majority Element is not Present";
    }
    return 0;
}