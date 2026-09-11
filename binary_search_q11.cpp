#include<bits/stdc++.h>
using namespace std;
int func(vector<int> &nums)
{
    int n=nums.size();
    int XOR=0;
    for (int i=0;i<n;i++)
    {
        XOR^=nums[i];
    }
    return XOR;
}
int main()
{
    vector<int> nums={1,1,2,2,3,3,4,5,5,6,6};
    cout<<"Single element in Array = "<<func(nums);
    return 0;
}