#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v={0, -1, 2, -3, 1};int x=-2;
    
    sort(v.begin(),v.end());
    /* finding the triplet with sum equals to X */ 
    
    for(int i=0;i<v.size()-2;i++)
    {
        int l=i+1,r=v.size()-1;
        while(l<r)
        {
            if(v[i]+v[l]+v[r]==x)
            {
                cout<<"\n the triplet is:"<<v[i]<<" "<<v[l]<<" "<<v[r];
                break;
            }
            else if(v[i]+v[l]+v[r]<x)
            l+=1;
            else
            r-=1;
        }
        if(l<r)
        break;
    }
    return 0;
}
