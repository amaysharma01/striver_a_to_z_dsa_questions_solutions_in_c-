#include<bits/stdc++.h>
using namespace std;
vector<int> func(vector<int> &arr)
{
    int count1=0,count2=0;
    int e1=INT_MIN,e2=INT_MIN;
    int n=arr.size();
    vector<int> temp;
    for (int i=0;i<n;i++)
    {
        if (count1==0 && e2!=arr[i])
        {
            e1=arr[i];
            count1=1;
        }
        else if (count2==0 && e1!=arr[i])
        {
            e2=arr[i];
            count2=1;
        }
        else if (arr[i]==e1)
        {
            count1++;
        }
        else if (arr[i]==e2)
        {
            count2++;
        }
        else
        {
            count1--;
            count2--;
        }
    }
    count1=0;
    count2=0;
    int mini=n/3+1;
    for (int i=0;i<n;i++)
    {
        if (arr[i]==e1)
        {
            count1++;
        }
        else if (arr[i]==e2)
        {
            count2++;
        }
    }
    if (count1>=mini)
    {
        temp.push_back(e1);
    }
    if (count2>=mini && e1!=e2)
    {
        temp.push_back(e2);
    }
    return temp;
}
int main()
{
    vector<int> arr = {1, 2, 1, 1, 3, 2};
    vector<int> temp=func(arr);
    cout<<"The Majority element = ";
    for (int it:temp)
    {
        cout<<it<<" ";
    }
    return 0;
}