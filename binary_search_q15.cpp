#include<bits/stdc++.h>
using namespace std;
int func1(vector<int> &piles, int speed)
{
    int total_hrs=0;
    for (int i=0;i<piles.size();i++)
    {
        total_hrs+=ceil(double(piles[i])/speed);
    }
    return total_hrs;
}
int func(vector<int> &piles, int h)
{
    int left=1;
    int maxpile=*max_element(piles.begin(),piles.end());
    int right=maxpile,ans=maxpile;
    while (left<=right)
    {
        int mid=left+(right-left)/2;
        int total_hrs=func1(piles,mid);
        if (total_hrs<=h)
        {
            ans=mid;
            right=mid-1;
        }
        else
        {
            left=mid+1;
        }
    }
    return ans;
}
int main()
{
    vector<int> piles={7, 15, 6, 3};
    int h=8;
    cout<<"Minimum hrs to eat a banna = "<<func(piles,h);
    return 0;
}