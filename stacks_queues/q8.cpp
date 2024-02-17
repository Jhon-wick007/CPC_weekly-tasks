#include <iostream>
#include<bits/stdc++.h>

using namespace std;

void eval(vector<int> &v,vector<int> &s)
{
    stack<int> st;
    st.push(0);
    s[0]=1;
    
    for(int i=1;i<v.size();i++)
    {
        while(!st.empty() && v[st.top()]<=v[i])
        {
            st.pop();
        }
        
        s[i]=(st.empty())? (i+1):(i-st.top());
        
        st.push(i);
    }
}
int main()
{
    vector<int> v={10, 4, 5, 90, 120, 80};
    vector<int> s(v.size(),0);
    eval(v,s);
    cout<<"\n the result is:"<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<s[i]<<" ";
    }
    return 0;
}
