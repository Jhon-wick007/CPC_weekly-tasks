#include <iostream>
#include<bits/stdc++.h>

using namespace std;


int main()
{
   vector<vector<int>> v={{1,2,2,3,4},{2,2,3,5,6},{1,3,2,2,6}};vector<int> res;
   int min=v[0].size(),ind=0;
   sort(v[0].begin(),v[0].end());
   for(int i=1;i<v.size();i++)
   {
       sort(v[i].begin(),v[i].end());
       if(min<v[i].size())
       {
           min=v[i].size();
           ind=i;
       }
   }
   map<int,int> mp;
   for(int i=0;i<v[ind].size();i++)
   {
       map<int,int>::iterator it=find(mp.begin(),mp.end(),v[ind][i]);
       if(it==mp.end())
       {
           mp[v[ind][i]]=1;
       }
       else
       mp[v[ind][i]]++;
   }
   
   for(map<int,int>::iterator i=mp.begin();i!=mp.end();i++)
   {
       int el=i->first;
       int freq=i->second;
       
       bool found=true;
       
       for(int j=0;j<v.size();j++)
       {
           if(ind!=j)
           {
               if(binary_search(v[j].begin(),v[j].end(),el))
               {
                   int l=lower_bound(v[j].begin(),v[j].end(),el)-v[j].begin();
                   int r=upper_bound(v[j].begin(),v[j].end(),el)-v[j].begin();
                   
                   if(r-l<freq)
                   freq=r-l;
               }
               else
               {
                   found=false;
                   break;
               }
           }
       }
       for(int k=0;k<freq;k++)
       {
           res.push_back(el);
       }
   }
   cout<<"\n the intersection is:"<<endl;
   for(int i=0;i<res.size();i++)
   {
       cout<<res[i]<<"\t";
   }
    return 0;
}
