#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
   vector<int> v={1, 2, 3, 4};
   vector<int> small(v.size(),-1),great(v.size(),-1);
   for(int j=0;j<v.size();j++)
   {
       int i=j-1,k=j+1;
       while(i>=0)
       {
           if(v[i]<v[j])
           {
               small[j]=i;
               break;
           }
           i--;
       }
       while(k<v.size())
       {
           if(v[k]>v[j])
           {
               great[j]=k;
               break;
           }
           k++;
       }
   }
   cout<<"\n the result are:"<<endl;
   for(int i=0;i<v.size();i++)
   {
       if(small[i]!=-1 && great[i]!=-1)
       {
           cout<<v[small[i]]<<" "<<v[i]<<" "<<v[great[i]]<<endl;
       }
   }

    return 0;
}
