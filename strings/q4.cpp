#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    string reverseWords(string S) 
    { 
        string res="";
        
        reverse(S.begin(),S.end());
        stack<char> st;
        for(int i=0;i<S.size();i++)
        {
            if(S[i]!='.')
            st.push(S[i]);
            
            else if(!st.empty())
            {
                while(!st.empty())
                {
                    res+=st.top();
                    st.pop();
                }
                res+='.';
            }
        }
        while(!st.empty())
        {
            res+=st.top();
            st.pop();
        }
        
        return res;
    } 
};

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}