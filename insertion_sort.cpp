#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v={64, 25, 12, 22, 11,-9,12};int t;
    
    /* Here we declare k=0 and then declare and intialise i=k and j=k+1, then we iterate i and j until 
       i becomes -1 in the inner iteration we we swap ther v[i] and v[j] if they pass v[i]>v[j] condition
       then k increamented. This process continues until k reaches n-1*/
       
    int k=0;
    while(k<v.size()-1)
    {
        int i=k,j=k+1;
        while(i!=-1)
        {
            if(v[i]>v[j])
            {
                t=v[i];
                v[i]=v[j];
                v[j]=t;
            }
            i-=1;j-=1;
        }
        k+=1;
    }
    
    cout<<"\n the sorted array is:"<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<"\t";
    }
    return 0;
}
