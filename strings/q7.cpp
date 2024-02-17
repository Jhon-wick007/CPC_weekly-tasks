#include <iostream>
#include<bits/stdc++.h>

using namespace std;
int f(int x)
{
    if(x==1)
    return 1;
    
    return x*f(x-1);
}
int right(string s,int l,int h,char x)
{
    int c=0;
    for(int i=l;i<=h;i++)
    {
        if(s[i]<x)
        c++;
    }
    
    return c;
}
int main()
{
    string str="acb";
    int fact=f(str.size());
    int count=1;
    
    for(int i=0;i<str.size();i++)
    {
        fact/=str.size()-i;
        int x=right(str,i,str.size()-1,str[i]);
        
        count+=x*fact;
    }
    
    cout<<"\n the rank is:"<<count;
    return 0;
}
