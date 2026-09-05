#include<bits/stdc++.h>
using namespace std;
bool func(vector<int> &arr, int target)
{
    int i=0,j=arr.size();
    int sum;
    while (i<j)
    {
        sum=arr[i]+arr[j];
        if (sum==target)
        {
            return true;
        }
        else if (sum>target)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    return false;
}
int main()
{
    vector<int> arr={2,6,5,8,11};
    int target=14;
    if (func(arr,target))
    {
        cout<<target<<" is present in the array";
    }
    else
    {
        cout<<target<<" is not prsent in the array";
    }
    return 0;
}