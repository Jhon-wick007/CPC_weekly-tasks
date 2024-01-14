#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v={1, -2, -3, 0, 7, -8, -2};
    int so_far=v[0],max_end=v[0],min_end=v[0];
    for(int i=1;i<v.size();i++)
    {
       int t=max(max(v[i],v[i]*max_end),v[i]*min_end);
       min_end=min(min(v[i],v[i]*max_end),v[i]*min_end);
       max_end=t;
       so_far=max(so_far,max_end);
    }
    cout<<"\n the product of continguous subarray is:"<<so_far;
    return 0;
}
