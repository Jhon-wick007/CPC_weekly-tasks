#include <iostream>
#include<bits/stdc++.h>

using namespace std;

/* Implementation of normal binary search algorithm but the change is 
   if middle element greater than the its neighbours then it is the geatest element
   or if its smaller than the element m+1 th element, then go to the right half
   or go to the left half */ 
   
int binary(vector<int> &v, int l,int r) 
{
    if(l<=r)
    {
        int m=(l+r)/2;
        
        if(v[m]>v[m+1] && v[m]>v[m-1])
        return v[m];
        
        else if(v[m]<v[m+1])
        return binary(v,m+1,r);
        
        else
        return binary(v,l,m-1);
    }
    return -1;
}
int main()
{
    vector<int> v={8, 10, 20, 80, 100, 200, 400, 500, 3, 2, 1};
    int x=binary(v,0,v.size()-1);
    
    if(x!=-1)
    cout<<"\n the greatest element is:"<<x<<endl;
    else
    cout<<"\n not found"<<endl;
    return 0;
}
