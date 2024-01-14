#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v={20, 4, 1, 2, 3, 4, 2, 10};
    int k1=0,l1=0,len=INT_MIN;
    for(int i=0;i<v.size()-1;i++)
    {
        if(v[i]<=v[i+1])
        {
            int k=i;
            while(v[i]<=v[i+1] && i<v.size()-1)
            {
                i++;
            }
            while(v[i]>=v[i+1] && i<v.size()-1)
            {
                i++;
            }
            int l=i;
            if(len<(l-k+1))
            {
                len=l-k+1;
                k1=k;
                l1=l;
            }
        }
    }
    cout<<"\n the biotonic subarray is:"<<endl;
    for(int i=k1;i<=l1;i++)
    {
        cout<<v[i]<<"\t";
    }
    return 0;
}
