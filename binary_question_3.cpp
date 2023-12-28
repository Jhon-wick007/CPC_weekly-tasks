#include <iostream>
#include<bits/stdc++.h>

using namespace std;


/* In addition to normal binary search conditions, we check one extra condition here, that is,
   whether the value at position m is the first occurance of our key element is our vector */ 
int binary(vector<int> &v,int l,int r,int key)
{
    while(l<=r)
    {
        int m=(l+r)/2;
        if((m==0 || v[m-1]<key) && v[m]==key)   
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
    vector<int> v={1, 2, 3, 3, 3, 3, 10};int key=3;
    int x=binary(v,0,v.size()-1,key);
    if(x!=-1)
    {
         /*Here we check if it occurs more than n/2
        times or not */ 
        if((x+v.size()/2)<=v.size()-1 && v[x+v.size()/2]==key)  
        cout<<"\n it occurs more than n/2 times";
        else
        cout<<"\n it occurs less than n/2 times";
    }
    else
    cout<<"\n element not found"<<endl;
    return 0;
}
