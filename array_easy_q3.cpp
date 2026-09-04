#include<bits/stdc++.h>
using namespace std;
bool check_array_is_sorted(vector<int> &arr)
{
    int n=arr.size();
    for (int i=0;i<n-1;i++)
    {
        if (arr[i]>arr[i+1])
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    vector<int> arr={13,46,24,52,20,9};
    if (check_array_is_sorted(arr))
    {
        cout<<"Sorted";
    }
    else
    {
        cout<<"Not Sorted";
    }
    return 0;
}