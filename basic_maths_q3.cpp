#include<bits/stdc++.h>
using namespace std;
int reverse_number(int number)
{
    int rev=0;
    while (number!=0)
    {
        int a=number%10;
        rev=rev*10+a;
        number=number/10;
    }
    return rev;
}
int main()
{
    int number;
    cout<<"Enter the number =  ";
    cin>>number;
    cout<<endl;
    int reverse=reverse_number(number);
    if (reverse==number)
    {
        cout<<"Palindrome number";       
    }
    else
    {
        cout<<"Not palindrome number";
    }
    return 0;
}