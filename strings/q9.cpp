#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s="  -  1 23",str="";bool sign=true,valid=true;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==' ' || s[i]=='+')
        continue;
        
        else if(s[i]>='0' && s[i]<='9')
        {
            str+=s[i];
        }
        else if(s[i]=='-')
        {
            sign=false;
        }
        else
        {
            valid=false;
            break;
        }
    }
    int res=0;
    if(valid)
    {
        for(int i=0;i<str.size();i++)
        {
            res=res*10+(str[i]-'0');
        }
        if(!sign)
        res=-res;
        
        cout<<"\n the converted number is:"<<res;
    }
    else
    {
        cout<<"\n the converyed string is:"<<0;
    }
    return 0;
}
