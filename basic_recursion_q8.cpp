#include<bits/stdc++.h>
using namespace std;
int fib(int n)
{
    if (n<=1)
    {
        return n;
    }
    return fib(n-1)+fib(n-2);
}
void print_fibonacci(int n)
{
    cout<<"fibonacci series is = ";
    for (int i=0;i<=n;i++)
    {
        cout<<fib(i)<<" ";
    }
}
int main()
{
    int number;
    cout<<"enter the number = ";
    cin>>number;
    cout<<"fibonacci number series is ";
    print_fibonacci(number);
    return 0;
}