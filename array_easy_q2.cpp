#include<bits/stdc++.h>
using namespace std;
int second_larget_element(vector<int> arr)
{
    int n=arr.size();
    int max_element=INT_MIN,s_max_element=INT_MIN;
    for (int i=0;i<n;i++)
    {
        if (arr[i]>max_element)
        {
            s_max_element=max_element;
            max_element=arr[i];
        }
        else if (arr[i]>s_max_element && arr[i]<max_element)
        {
            s_max_element=arr[i];
        }
    }
    return s_max_element;
}
int main()
{
    vector<int> arr={13,46,24,52,20,9};
    cout<<"Second larget element in array = "<<second_larget_element(arr);
    return 0;
}