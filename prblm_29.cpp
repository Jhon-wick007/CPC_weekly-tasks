#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
  string s="a1b2c3d4";
  sort(s.begin(),s.end());
  int k=0;
  for(int i=0;i<s.size();i++)
  {
      if(s[i]>='0' && s[i]<='9')
      k++;
      else
      break;
  }
  string str1=s.substr(0,k);
  string str2=s.substr(k,s.size()-k);
  reverse(str1.begin(),str1.end());
  reverse(str2.begin(),str2.end());
  s=str1+str2;
  reverse(s.begin(),s.end());
  cout<<"\n the resultant string is:"<<s;
    return 0;
}
