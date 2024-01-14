#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
   vector<int> v={3, 0, 2, 0, 4};
   vector<int> left(v.size()),right(v.size());
   left[0]=v[0];
   for(int i=1;i<v.size();i++)
   {
       left[i]=max(left[i-1],v[i]);
   }
   right[v.size()-1]=v[v.size()-1];
   for(int i=v.size()-2;i>=0;i--)
   {
       right[i]=max(right[i+1],v[i]);
   }
   int res=0;
   for(int i=1;i<v.size()-1;i++)
   {
       int x=min(left[i-1],right[i+1]);
       if(x>v[i])
       res+=x-v[i];
   }
   cout<<"\n the amount of water used is:"<<res;
    return 0;
}
