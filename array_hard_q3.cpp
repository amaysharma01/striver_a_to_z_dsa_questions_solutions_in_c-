#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> func(vector<int> &arr)
{
    int n=arr.size();
    sort(arr.begin(),arr.end());
    int left,right;
    int sum;
    vector<vector<int>> temp;
    for (int i=0;i<n;i++)
    {
        if (i>0 && arr[i]==arr[i-1])
        {
            continue;
        }
        left=i+1;
        right=n-1;
        while (left<right)
        {
            sum=arr[i]+arr[left]+arr[right];
            if (sum==0)
            {
                temp.push_back({arr[i],arr[left],arr[right]});
                left++;
                right--;
            }
            while (left<right && arr[left]==arr[left+1])
            {
                left++;
            }
            while (left<right && arr[right]==arr[right-1])
            {
                right--;
            }
            if (sum>0)
            {
                right--;
            }
            if (sum<0)
            {
                left++;
            }
        }
    }
    return temp;
}
int main()
{
    vector<int> arr={-1,0,1,2,-1,-4};
    vector<vector<int>> ans=func(arr);
    for (int i=0;i<ans.size();i++)
    {
        for (int j=0;j<ans[0].size();j++)
        {
            cout<<ans[i][j];
        }
        cout<<endl;
    }
    return 0;
}