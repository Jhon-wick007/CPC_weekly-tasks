#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v={2,1,2,1,3};vector<bool> vis(v.size(),false);
    for(int i=0;i<v.size();i++)
    {
        if(vis[v[i]-1])
        cout<<v[i]<<"\t";
        
        else
        vis[v[i]-1]=true;
    }
    return 0;
}
