#include<bits/stdc++.h>
using namespace std;
int func(vector<int> &arr, int target)
{
    for (int i=0;i<arr.size();i++)
    {
        if (arr[i]==target)
        {
            return i+1;
        }
    }
    return -1;
}
int main()
{
    vector<int> arr={1,2,3,4,5};
    int target=3;
    cout<<target<<" is present at index "<<func(arr,target);
    return 0;
}