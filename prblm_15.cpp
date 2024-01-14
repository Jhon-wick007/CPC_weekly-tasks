#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v={2, 3, 10, 6, 4, 8, 1};
    int res=0;
    for(int j=0;j<v.size();j++)
    {
        int i=j-1,k=j+1;
        int sml=INT_MAX,grt=INT_MIN;
        while(i>-1)
        {
            if(v[i]<sml)
            sml=v[i];
            i--;
        }
        while(k<v.size())
        {
            if(v[k]>grt)
            grt=v[k];
            k++;
        }
        if(sml!=INT_MAX && grt!=INT_MIN)
        {
            cout<<sml<<" "<<v[j]<<" "<<grt<<endl;
            int d1=grt-sml,d2=v[j]-sml,d3=grt-v[j];
            int d=max(max(d1,d2),d3);
            if(res<d)
            res=d;
        }
    }
    cout<<"\n the greatest difference is:"<<res;
    return 0;
}
