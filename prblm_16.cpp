#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v={5,6,1,10};int res=INT_MAX;
    for(int j=0;j<v.size();j++)
    {
        int i=j-1,k=j+1;
        while(i>-1)
        {
            if(v[i]>v[j] && res>v[i]-v[j])
            res=v[i]-v[j];
            if(v[i]<=v[j] && res>v[j]-v[i])
            res=v[j]-v[i];
            
            i--;
        }
        while(k<v.size())
        {
            if(v[k]>v[j] && res>v[k]-v[j])
            res=v[k]-v[j];
            if(v[k]<=v[j] && res>v[j]-v[k])
            res=v[j]-v[k];
            
            k++;
        }
    }
    cout<<"\n the result is:"<<res;
    return 0;
}
