#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
   vector<int> v={1, 2, 0, 4, 3, 0, 5, 0};
   int j=0;
   for(int i=0;i<v.size();i++)
   {
       if(v[i]!=0)
       {
           swap(v[i],v[j]);
           j++;
       }
   }
   cout<<"\n the result is:"<<endl;
   for(int i=0;i<v.size();i++)
   {
       cout<<v[i]<<"\t";
   }
    return 0;
}
