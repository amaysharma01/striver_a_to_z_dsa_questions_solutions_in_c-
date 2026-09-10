#include<bits/stdc++.h>
using namespace std;
vector<int> func(vector<int> &nums)
{
    int n=nums.size();
    int repeating=-1,missing=-1;
    unordered_map<int,int> mpp;
    for (int i=0;i<n;i++)
    {
        mpp[nums[i]]++;
    }
    for (int i=1;i<=n;i++)
    {
        if (mpp[i]>=2)
        {
            repeating=i;
        }
        else if (mpp[i]==0)
        {
            missing=i;
        }
    }
    return {repeating,missing};
}
int main()
{
    vector<int> arr={3, 5, 4, 1,1};
    vector<int> result=func(arr);
    cout<<"The repeating number = "<<result[0]<<" missing number = "<<result[1]<<endl;
    return 0;
}