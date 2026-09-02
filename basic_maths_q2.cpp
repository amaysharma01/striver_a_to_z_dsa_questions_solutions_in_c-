#include<bits/stdc++.h>
using namespace std;
int main()
{
    int number;
    cout<<"enter the number  = ";
    cin>>number;
    cout<<endl;
    int rev=0;
    while (number!=0)
    {
        int a=number%10;
        rev=rev*10+a;
        number=number/10;
    }
    cout<<"Reverse number is  = "<<rev;
    return 0;
}