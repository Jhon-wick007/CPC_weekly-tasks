#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void func(string str,int x)
{
   if(x<str.size())
   {
       func(str,x+1);
       cout<<str[x]<<" ";
   }
}
int main() {
  
    string str="hello";
    func(str,0);
    return 0;
}