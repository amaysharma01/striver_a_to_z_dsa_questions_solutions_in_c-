#include<bits/stdc++.h>
using namespace std;
int func(vector<int> &arr)
{
    int n=arr.size();
    int count1=0,count2=0;
    for (int i=0;i<arr.size();i++)
    {
        if (arr[i]==1)
        {
            count1++;
        }
        else
        {
            count1=0;
        }
        count2=max(count2,count1);
    }
    return count2;
}
int main()
{
    vector<int> arr={1, 1, 0, 1, 1, 1};
    cout<<"Maximum consecutive ones are = "<<func(arr);
    return 0;
}