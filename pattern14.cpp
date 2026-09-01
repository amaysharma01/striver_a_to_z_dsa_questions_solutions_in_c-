#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n = ";
    cin>>n;
    cout<<endl;
    char a='A';
    for (int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<a;
            a++;
        }
        a='A';
        cout<<endl;
    }
    return 0;
}