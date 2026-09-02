#include<bits/stdc++.h>
using namespace std;
int main()
{
    int number1, number2;
    cout<<"enter the first number  = ";
    cin>>number1;
    cout<<"enter the second number  = ";
    cin>>number2;
    while (number1>0 && number2>0)
    {
        if (number1>=number2)
        {
            number1=number1%number2;
        }
        else
        {
            number2=number2%number1;
        }
    }
    if (number1>number2)
    {
        cout<<"Greatest Common Divisor of a Number = "<<number1;
    }
    else
    {
        cout<<"Greatest Common Divisor of a Number = "<<number2;
    }
}