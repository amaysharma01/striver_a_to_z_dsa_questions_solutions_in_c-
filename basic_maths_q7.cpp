#include<bits/stdc++.h>
using namespace std;
int main()
{
    int number;
    cout<<"enter the number = ";
    cin>>number;
    if (number==1 || number ==0)
    {
        cout<<"not prime number";
    }
    if (number==2)
    {
        cout<<"Prime number";
    }
    for (int i=2;i<=sqrt(number);i++)
    {
        if (number%i==0)
        {
            cout<<"Not prime number";
            return 0;
        }
    }
    cout<<"Prime number";
    return 0;
}