#include<bits/stdc++.h>
using namespace std;
void print(int n, string name)
{
    if (n==0)
    {
        return;
    }
    cout<<name<<" ";
    print(n-1,name);
}
int main()
{
    string name="XYZ";
    int n_of_times=5;
    print(n_of_times,name);
    return 0;
}