#include <iostream>
#include<bits/stdc++.h>

using namespace std;

/* here we declare i and j for v1 and v2 vectors and push the element of v1 if v[i]<=v2[j]
   and increament the index i or we push the element from v2 and increase the index j until any one the indices 
   exceed the limit , then we include the remaining element from the vector where the index is not exceeded */
   
vector<int> merge(vector<int> &v1,vector<int> &v2)
{
    int i=0,j=0;vector<int> t;
    while(i<v1.size() && j<v2.size())    
    {
        if(v1[i]<=v2[j])
        {
            t.push_back(v1[i]);
            i++;
        }
        else
        {
            t.push_back(v2[j]);
            j+=1;
        }
    }
    while(i<v1.size())
    {
        t.push_back(v1[i]);
        i+=1;
    }
    while(j<v2.size())
    {
        t.push_back(v2[j]);
        j+=1;
    }
    return t;
}
int main()
{
    vector<int> v1={2, 8, 13, 15, 20},v2={5, 7, 9, 25};
    vector<int> res;
    res=merge(v1,v2);
    cout<<"\n the resultant vector is:"<<endl;
    for(int i=0;i<res.size();i++)
    {
        cout<<res[i]<<"\t";
    }
    return 0;
}
