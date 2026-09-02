#include<bits/stdc++.h>
using namespace std;
int factorial_of_number(int number, int fact)
{
    if (number==1)
    {
        return fact;
    }
    fact=fact*number;
    factorial_of_number(number-1,fact);
}
int main()
{
    int number;
    cout<<"enter the number = ";
    cin>>number;
    if (number==0||number==1)
    {
        cout<<"Factorial of a number is 1";
        return 0;
    }
    cout<<"Factorial of a number is "<<factorial_of_number(number,1);
    return 0;
}