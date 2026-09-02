#include<bits/stdc++.h>
using namespace std;
int integerPower(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}
int main()
{
    int number;
    cout<<"enter the number = ";
    cin>>number;
    cout<<endl;
    int k=to_string(number).length();
    int n=number;
    int sum=0;
    while (n>0)
    {
        int a=n%10;
        sum=sum+integerPower(a,k);
        n=n/10;
    }
    if (sum==number)
    {
        cout<<"Armstrong number";
    }
    else
    {
        cout<<"Not Armstrong number";
    }
    return 0;
}