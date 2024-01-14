#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int func(vector<int> &v,vector<int> &dp,int ind)
{
    if(ind>=v.size())
    return 0;
    
    if(dp[ind]!=-1)
    return dp[ind];
    
    return dp[ind]=max(func(v,dp,ind+1),v[ind]+func(v,dp,ind+2));
}
int main()
{
   vector<int> v={5, 5, 10, 100, 10, 5};
   vector<int> dp(v.size()+1,-1);
   
   cout<<"\n the result is:"<<func(v,dp,0);
    return 0;
}
