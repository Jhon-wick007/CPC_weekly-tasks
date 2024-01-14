#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
   vector<int> v={0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1};
   sort(v.begin(),v.end());
   cout<<"\n the result is:"<<endl;
   for(int i=0;i<v.size();i++)
   {
       cout<<v[i]<<"\t";
   }
    return 0;
}
