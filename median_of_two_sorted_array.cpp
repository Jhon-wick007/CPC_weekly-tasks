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
    vector<int> v1={ 1, 4, 5, 6, 10},v2={2, 3, 4, 5, 7};
    vector<int> res;
    res=merge(v1,v2);
    cout<<"\n the resultant vector is:"<<endl;
    for(int i=0;i<res.size();i++)
    {
        cout<<res[i]<<"\t";
    }
    /* here if the combined array length is even then average of element at positions n/2-1 and n/2-1
    or if it is odd then we declare the median as the middle element of the combined array */
    
    if(res.size()%2==0) 
    cout<<"\n the median is:"<<(res[res.size()/2-1]+res[res.size()/2])*1.0/2;
    else
    cout<<"\n the median is:"<<res[res.size()/2]*1.0;
    return 0;
}
