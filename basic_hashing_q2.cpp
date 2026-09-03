#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr={10,5,10,15,10,5};
    unordered_map<int,int> mpp;
    for (int i=0;i<arr.size();i++)
    {
        mpp[arr[i]]++;
    }
    int max_count=INT_MIN,key,min_count=INT_MAX,key1;
    for (auto it=mpp.begin();it!=mpp.end();it++)
    {
        if (it->second>max_count)
        {
            max_count=it->second;
            key=it->first;
        }
        if (it->second<min_count)
        {
            min_count=it->second;
            key1=it->first;
        }
    }
    cout<<"Highest occuring element in an array = "<<key<<endl;
    cout<<"Lowest occuring element in an array = "<<key1<<endl;
    return 0;
}