#include<bits/stdc++.h>
using namespace std;
int main()
{
    int number;
    cout<<"enter the number = ";
    cin>>number;
    cout<<endl;
    int count=0;
    while (number!=0)
    {
        count++;
        number=number/10;
    }
    cout<<"Number of digits in a number = "<<count;
    return 0;
}