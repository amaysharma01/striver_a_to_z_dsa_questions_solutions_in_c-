#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the rows you want to print = ";
    cin>>n;
    cout<<endl;
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=n;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}