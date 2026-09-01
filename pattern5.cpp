#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n = ";
    cin>>n;
    cout<<endl;
    for (int i=n;i>=0;i--)
    {
        for (int j=0;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}