#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,res;
    cin>>x;
    res=x>>31;
    res=(res+x)^res;
    cout<<"\n the result is:"<<res;
    
}