#include <iostream>
#include<bits/stdc++.h>

using namespace std;

/* here we find pivot element by finding the middle element, if it is greater than the next element
   return that mid itself, else if it is smaller than the previou element means return mid-1 */ 
   
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
    
    if(v[l]>=v[r])
    return pivot(v,l,m-1);
    else
    return pivot(v,m+1,r);
}
int main()
{
    vector<int> v={5, 6, 0, 2, 3, 4};
    
    int x=pivot(v,0,v.size()-1);
    if(x==-1)  // if x==-1 means, the vector is already sorted 
    cout<<"\n the smallest element is:"<<v[0];
    else if(v[x]>v[x+1])   // checking if the vector is left rotated
    cout<<"\n the smallest element is:"<<v[x+1];
    else                   // if the above condition is not valid means, then it is automatically right rotated
    cout<<"\n the smallest element is:"<<v[x-1];
    return 0;
}
