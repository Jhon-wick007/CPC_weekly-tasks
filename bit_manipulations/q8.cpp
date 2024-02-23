#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,y;
    cin>>x>>y;
    
    while(y!=0)
    {
        unsigned int car=x&y;
        x=x^y;
        y=car<<1;
    }
    
    cout<<"\n the result is:"<<x;
    
}