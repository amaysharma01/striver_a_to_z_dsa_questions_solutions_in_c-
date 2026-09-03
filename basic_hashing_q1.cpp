#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {10,5,10,15,10,5};
    unordered_map<int,int> mpp;
    for (int i=0;i<arr.size();i++)
    {
        mpp[arr[i]]++;
    }
    cout<<"element "<<" "<<"frequency";
    cout<<endl;
    for (auto it=mpp.begin();it!=mpp.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    return 0;
}