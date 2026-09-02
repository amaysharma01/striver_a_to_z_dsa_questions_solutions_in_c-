#include<bits/stdc++.h>
using namespace std;
void reverse_an_array(int i, int n, vector<int> &array)
{
    if (i>=n/2)
    {
        return;
    }
    swap(array[i],array[n]);
    reverse_an_array(i+1,n-1,array);
}
int main()
{
    vector<int> array={1,2,4,5,6};
    reverse_an_array(0,array.size()-1,array);
    cout<<"Reverse array ";
    for (auto it=array.begin();it!=array.end();it++)
    {
        cout<<*it<<" ";
    }
    return 0;
}