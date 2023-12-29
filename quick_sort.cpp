#include <iostream>
#include<bits/stdc++.h>

using namespace std;

/* Here we assign the last element as pivot element and intialise i as l-1
   then we iterate through l to h and increament the i when current element in loop
   is lesser than pivot, then we swap with the element in the ith index. Atlast 
   we swap the i+1th element with the pivot element return i+1 */ 
   
int pivot1(vector<int> &v,int l,int r)
{
    int p=v[r];
    int i=l-1;
    for(int j=l;j<=r;j++)
    {
        if(v[j]<p)
        {
            i+=1;
            swap(v[i],v[j]);
        }
    }
    swap(v[i+1],v[r]);
    return i+1;
}

/* Here we divide the arrray based on the pivot element and we recursively do until l<r */

void quick(vector<int> &v,int l,int r)
{
    if(l<r)
    {
        int pivot=pivot1(v,l,r);
        
        quick(v,l,pivot-1);
        quick(v,pivot+1,r);
    }
}
int main()
{
    vector<int> v={64, 25, 12, 22, 11,-9,12};int t;
    
    quick(v,0,v.size()-1);  
    
    cout<<"\n the sorted array is:"<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<"\t";
    }
    return 0;
}
