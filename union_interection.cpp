#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v1={3,4,4,5,6,9,10},v2={1,4,6,7,9,11},res1,res2;          //declaring and intialising the vectors 
  
    for(int i=0;i<v1.size();i++)                                         // union operation 
    {
        vector<int>::iterator it=find(res1.begin(),res1.end(),v1[i]);
        if(it==res1.end())
        res1.push_back(v1[i]);
    }
    for(int i=0;i<v2.size();i++)
    {
        vector<int>::iterator it=find(res1.begin(),res1.end(),v2[i]);
        if(it==res1.end())
        res1.push_back(v2[i]);
    }
    
    
    for(int i=0;i<v1.size();i++)                                     // itersection operation
    {
        vector<int>::iterator it=find(v2.begin(),v2.end(),v1[i]);
        vector<int>::iterator it1=find(res2.begin(),res2.end(),v1[i]);
        if(it!=v2.end() && it1==res2.end())
        res2.push_back(v1[i]);
    }
    cout<<"\n the union is:"<<endl;                               //printing the union operation results
    for(int i=0;i<res1.size();i++)
    {
        cout<<res1[i]<<" ";
    }
    cout<<"\n the intersection is:"<<endl;                      // printing intersection operatio results
    
    for(int i=0;i<res2.size();i++)
    {
        cout<<res2[i]<<" ";
    }
    return 0;
}
