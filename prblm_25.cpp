#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
   vector<int> v={0, 1, 0, 1, 0, 0, 1, 1, 1, 0};
   int l=0,r=v.size()-1;
   while(v[l]==0 && l<r)
   l++;
   while(v[r]==1 && l<r)
   r--;
   
   while(l<r)
   {
       v[l]=0;
       v[r]=1;
       l++;r--;
   }
   cout<<"\n the result is:"<<endl;
   for(int i=0;i<v.size();i++)
   {
       cout<<v[i]<<"\t";
   }
    return 0;
}
