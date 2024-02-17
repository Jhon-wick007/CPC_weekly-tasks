#include <iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
{
    string str="geeksforgeeks";
    map<char,int> mp;
    for(int i=0;i<str.size();i++)
    {
        mp[str[i]]+=1;
    }
    
    for(auto x=mp.begin();x!=mp.end();x++)
    {
        if(x->second>1)
        cout<<x->first<<" "<<x->second<<endl;
    }
    return 0;
}
