#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
   vector<int> v={12, 34, 45, 9, 8, 90, 3},v1;
   for(int i=0;i<v.size();i++)
   {
       if(v[i]%2==0)
       v1.push_back(v[i]);
   }
   for(int i=0;i<v.size();i++)
   {
       if(v[i]%2!=0)
       v1.push_back(v[i]);
   }
   
   for(int i=0;i<v1.size();i++)
   {
       v[i]=v1[i];
   }
   cout<<"\n the result is:"<<endl;
   for(int i=0;i<v.size();i++)
   {
       cout<<v[i]<<"\t";
   }
    return 0;
}
