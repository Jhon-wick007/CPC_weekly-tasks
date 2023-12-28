#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int pivot(vector<int> &v,int l,int r)
{
    if(r<l)
    return -1;
    
    if(l==r)
    return l;
    
    int m=(l+r)/2;
    if(m<r && v[m]>v[m+1])
    return m;
    
    if(m>l && v[m]<v[m-1])
    return m-1;
    
    if(v[l]>=v[m])
    return pivot(v,l,m-1);
    else
    return pivot(v,m+1,r);
    
}
int binary(vector<int> &v,int l,int r,int key)
{
    while(l<=r)
    {
        int m=(l+r)/2;
        if(v[m]==key)
        return m;
        else if(v[m]<key)
        l=m+1;
        else
        r=m-1;
    }
    return -1;
}
int main()
{
    vector<int> v={5,6,7,8,9,10,1,2,3};
    int key=2,x;
    int p=pivot(v,0,v.size()-1);
    if(p==-1)
    x=binary(v,0,v.size()-1,key);
    if(v[p]==key)
    cout<<"\n the key is fount at position:"<<p<<endl;
    else 
    {
        if(v[0]<=key)
        x=binary(v,0,p,key);
        else
        x=binary(v,p+1,v.size()-1,key);
        cout<<"\n the key is found at position: "<<x<<endl;
    }
    return 0;
}
