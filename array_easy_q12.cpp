#include<bits/stdc++.h>
using namespace std;
int func(vector<int> &arr)
{
    int Xor=0;
    for (int i=0;i<arr.size();i++)
    {
        Xor=Xor^arr[i];
    }
    return Xor;
}
int main()
{
    vector<int> arr= {4,1,2,1,2};
    cout<<"number that appears ones  = "<<func(arr);
    return 0;
}