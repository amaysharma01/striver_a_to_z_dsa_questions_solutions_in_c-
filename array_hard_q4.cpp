#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> func(vector<int> &arr, int target)
{
    int n=arr.size();
    sort(arr.begin(),arr.end());
    int sum;
    int left,right;
    vector<vector<int>> temp;
    for (int i=0;i<n;i++)
    {
        for (int j=i+1;j<n;j++)
        {
            left=j+1,right=n-1;
            while (left<right)
            {
                sum=arr[i]+arr[j]+arr[left]+arr[right];
                if (sum==target)
                {
                    temp.push_back({arr[i],arr[j],arr[left],arr[right]});
                    left++;
                    right--;
                }
                else if (sum>target)
                {
                    right--;
                }
                else
                {
                    left++;
                }
                while (left<right && arr[left]==arr[left+1])
                {
                    left++;
                }
                while (left<right && arr[right]==arr[right-1])
                {
                    right--;
                }
            }
        }
    }
    return temp;
}
int main()
{
    vector<int> arr={1,0,-1,0,-2,2};
    int target=0;
    vector<vector<int>> ans=func(arr,target);
    for (int i=0;i<ans.size();i++)
    {
        for (int j=0;j<ans[0].size();j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}