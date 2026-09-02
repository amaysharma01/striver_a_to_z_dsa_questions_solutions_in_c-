#include<bits/stdc++.h>
using namespace std;
void print(int a, int n)
{
    if (a>n)
    {
        return;
    }
    cout<<a<<" ";
    print(a+1,n);
}
int main()
{
    int n;
    cout<<"enter the n = ";
    cin>>n;
    print(1,n);
    return 0;
}