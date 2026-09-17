#include<bits/stdc++.h>
using namespace std;
int isplace(vector<int> &book, int p)
{
    int pages=0;
    int student=1;
    for (int b:book)
    {
        if (pages+b>p)
        {
            student++;
            pages=b;
        }
        else
        {
            pages=pages+b;
        }
    }
    return student;
}
int func(vector<int> &books, int m)
{
    int n=books.size();
    if (m>n)
    {
        return -1;
    }
    int left=*max_element(books.begin(),books.end());
    int right=accumulate(books.begin(),books.end(),0);
    while (left<=right)
    {
        int mid=left+(right-left)/2;
        int ans=isplace(books,mid);
        if (ans>m)
        {
            left=mid+1;
        }
        else
        {
            right=mid-1;
        }
    }
    return left;
}
int main()
{
     
    vector<int> arr = {25, 46, 28, 49, 24};
    int m = 4;
    cout<<func(arr,m);
    return 0;
}