#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
  vector<int> v={-1, 2, -3, 4, 5, 6, -7, 8, 9};
  int i=-1;
  for(int j=0;j<v.size();j++)
  {
      if(v[j]<0)
      {
          i++;
          swap(v[i],v[j]);
      }
  }
  int p=i+1,neg=0;
  while(p<v.size() && neg<p && v[neg]<0)
  {
      swap(v[neg],v[p]);
      neg+=2;
      p++;
  }
   cout<<"\n the result is:"<<endl;
   for(int i=0;i<v.size();i++)
   {
       cout<<v[i]<<"\t";
   }
    return 0;
}
