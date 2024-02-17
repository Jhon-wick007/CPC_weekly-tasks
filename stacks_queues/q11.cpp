#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        stack<long long> st; st.push(arr[0]);
        map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]=0;
        }
        vector<long long> res(n); int c=0;
        for(int i=1;i<n;i++)
        {
            if(st.empty())
            {
                st.push(arr[i]);
                continue;
            }
            
            while( !st.empty() && st.top()<arr[i])
            {
                mp[st.top()]=arr[i];
                st.pop();
            }
            st.push(arr[i]);
        }
        while(!st.empty())
        {
            mp[st.top()]=-1;
            st.pop();
        }
        
        for(int i=0;i<n;i++)
        {
            res[i]=mp[arr[i]];
        }
        return res;
    }
};


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        
        int n;
        cin>>n;
        vector<long long> arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        Solution obj;
        vector <long long> res = obj.nextLargerElement(arr, n);
        for (long long i : res) cout << i << " ";
        cout<<endl;
    }
	return 0;
}
