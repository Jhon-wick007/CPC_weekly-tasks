#include <iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
{
    string str="a1b2c3d4e5f6g7h8i9j1k2l3m4";
    string res="";
    for(int i=0;i<str.size();i+=2)
    {
        res+=str[i];
    }
    for(int i=1;i<str.size();i+=2)
    {
        res+=str[i];
    }
    cout<<"\n the string is:"<<res;
    return 0;
}
