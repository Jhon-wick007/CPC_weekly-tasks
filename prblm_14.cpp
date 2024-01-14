#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<vector<int>> v={{0,1,1,1},{0,0,1,1},{1,1,1,1},{0,0,0,0}};
    int res=INT_MIN,ind=0;
    for(int i=0;i<v.size();i++)
    {
        int c=count(v[i].begin(),v[i].end(),1);
        if(res<c)
        res=c,ind=i;
    }
    if(res!=INT_MIN)
    cout<<"\n the result is:"<<ind;
    else
    cout<<"\n there is no ones";
    return 0;
}
