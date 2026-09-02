#include<bits/stdc++.h>
using namespace std;
int sum_of_number(int number, int sum)
{
    if (number==0)
    {
        return sum;
    }
    sum=sum+number;
    sum_of_number(number-1,sum);
}
int main()
{
    int number;
    cout<<"enter the number  = ";
    cin>>number;
    cout<<"Sum of first N number = "<<sum_of_number(number,0);
    return 0;
}