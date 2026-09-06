#include<bits/stdc++.h>
using namespace std;
void func(vector<vector<int>> &arr)
{
    int n=arr.size();
    for (int i=0;i<n;i++)
    {
        for (int j=i+1;j<n;j++)
        {
            swap(arr[i][j],arr[j][i]);
        }
    }
    for (int i=0;i<n;i++)
    {
        reverse(arr[i].begin(),arr[i].end());
    }
}
int main()
{
    vector<vector<int>> arr= {{0,1,2,0},{3,4,5,2},{1,3,1,5}};
    func(arr);
    for (int i=0;i<arr.size();i++)
    {
        for (int j=0;j<arr[0].size();j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}