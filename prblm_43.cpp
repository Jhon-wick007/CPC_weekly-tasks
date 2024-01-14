#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
   vector<int> v={16, 17, 4, 3, 5, 2};
   
   int max=v[v.size()-1];
   cout<<max<<"\t";
   for(int i=v.size()-2;i>=0;i--)
   {
       if(v[i]>max)
       {
           cout<<v[i]<<"\t";
           max=v[i];
       }
   }
   
    return 0;
}
