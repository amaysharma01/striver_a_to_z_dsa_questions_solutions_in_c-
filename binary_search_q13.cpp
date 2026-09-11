#include<bits/stdc++.h>
using namespace std;
int func(int number)
{
    int left=1;
    int right=number;
    while (left<right)
    {
        int mid=left+(right-left)/2;
        if (mid*mid==number)
        {
            return mid;
        }
        else if ((mid*mid)>number)
        {
            right=mid-1;
        }
        else
        {
            left=mid+1;
        }
    }
    return -1;
}
int main()
{
    int number;
    cout<<"Enter The Number  = ";
    cin>>number;
    cout<<"Square Root of "<<number<<" is = "<<func(number);
    return 0;
}