#include <iostream>
#include<bits/stdc++.h>

using namespace std;

/* Implementation of normal binary search algorithm but the change is 
   here we additionally check whether m+1 value is lesser than value at higer index,
   which means fixed point is at right half, or else whether m-1 value is greater than 
   value at lower index then the fixed point is in left half */ 
   
int binary(vector<int> &v, int l,int r) 
{
    if(l<=r)
    {
        int m=(l+r)/2;
        if(v[m]==m)
        return m;
        
        int res=-1;
        if(m+1<=v[r])
        res=binary(v,m+1,r);
        
        if(res!=-1)
        return res;
        
        if(m-1>=v[l])
        return binary(v,l,m-1);
    }
    return -1;
}
int main()
{
    vector<int> v={ -10, -1, 0, 3, 10, 11, 30, 50, 100 };
    int x=binary(v,0,v.size()-1);
    
    if(x!=-1)
    cout<<"\n found at:"<<x<<endl;
    else
    cout<<"\n not found"<<endl;
    return 0;
}
