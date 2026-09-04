#include<bits/stdc++.h>
using namespace std;
int largest_element(vector<int> arr)
{
    int n=arr.size();
    int max_element=INT_MIN;
    for (int i=0;i<n;i++)
    {
        if (arr[i]>max_element)
        {
            max_element=arr[i];
        }
    }
    return max_element;
}
int main()
{
    vector<int> arr={13,46,24,52,20,9};
    cout<<"larget element in array = "<<largest_element(arr);
    return 0;
}