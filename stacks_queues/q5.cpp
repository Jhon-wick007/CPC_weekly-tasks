#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    bool ispar(string x)
    {
        stack<char> st;
        for(int i=0;i<x.size();i++)
        {
            if(st.empty())
            st.push(x[i]);
            
            else if(!st.empty() && x[i]==')' && st.top()=='(')
            st.pop();
            
            else if(!st.empty() && x[i]=='}' && st.top()=='{')
            st.pop();
            
            else if(!st.empty() && x[i]==']' && st.top()=='[')
            st.pop();
            
            else
            st.push(x[i]);
        }
        
        if(!st.empty())
        return false;
        
        else
        return true;
    }

};


int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}