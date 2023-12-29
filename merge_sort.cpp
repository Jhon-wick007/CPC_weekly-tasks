#include <iostream>
#include<bits/stdc++.h>

using namespace std;

/* Here we store the divided array in two seperate arrays and then by 
   declaring i and j we iterate through the two arrays seperately and make changes into 
   original array by arr1[i]<=arr2[j] and we increament the corresponding index through 
   which the the element is added. and finally we add the remeaining elements */ 
   
void sort1(vector<int> &v,int l,int m,int r)
{
    vector<int> v1(m-l+1,0);
    vector<int> v2(r-m,0);
    for(int i=0;i<v1.size();i++)
    {
        v1[i]=v[l+i];
    }
    for(int i=0;i<v2.size();i++)
    {
        v2[i]=v[m+i+1];
    }
    int i=0,j=0,k=l;
    while(i<v1.size() && j<v2.size())
    {
        if(v1[i]<=v2[j])
        {
            v[k]=v1[i];
            k+=1;
            i+=1;
        }
        else
        {
            v[k]=v2[j];
            k+=1;
            j+=1;
        }
    }
    while(i<v1.size())
    {
        v[k]=v1[i];
        k+=1;
        i+=1;
    }
    while(j<v2.size())
    {
        v[k]=v2[j];
        k+=1;
        j+=1;
    }
    
}
/* Here we define a recursive function which divides the array repeatedly until there exist only 
   one element */ 
void merge(vector<int> &v,int l,int r)
{
    if(l<r)
    {
        int m=(l+r)/2;
        merge(v,l,m);
        merge(v,m+1,r);
        sort1(v,l,m,r);
    }
}
int main()
{
    vector<int> v={64, 25, 12, 22, 11,-9,12};int t;
    
    merge(v,0,v.size()-1);   
    
    cout<<"\n the sorted array is:"<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<"\t";
    }
    return 0;
}
