#include<bits/stdc++.h>
using namespace std;
bool check_for_palindrome(string str)
{
    string temp;
    temp=str;
    reverse(str.begin(),str.end());
    if (temp==str)
    {
        return true;
    }
    return false;
}
int main()
{
    string str;
    cout<<"enter the string = ";
    cin>>str;
    if (check_for_palindrome(str))
    {
        cout<<"string is palindrome";
    }
    else
    {
        cout<<"string is not palindrome";
    }
    return 0;
}