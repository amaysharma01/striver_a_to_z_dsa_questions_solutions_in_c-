#include<bits/stdc++.h>
using namespace std;
int func(vector<int> &arr)
{
    int n=arr.size();
    unordered_set<int> st;
    for (int i=0;i<n;i++)
    {
        st.insert(arr[i]);
    }
    int longest=1;
    for (int it:st)
    {
        if (st.find(it-1)==st.end())
        {
            int count=1;
            int x=it;
            while (st.find(x+1)!=st.end())
            {
                count++;
                x=x+1;
            }
            longest=max(longest,count);
        }
    }
    return longest;
}
int main()
{
    vector<int> arr={100, 4, 200, 1, 3, 2};
    cout<<"the longest sequence in the array = "<<func(arr);
    return 0;
}