#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v={-2, -3, 4, -1, -2, 1, 5, -3};
    int so_far=0,max=INT_MIN;
    for(int i=0;i<v.size();i++)
    {
        so_far+=v[i];
        if(max<so_far)
        max=so_far;
        
        if(so_far<0)
        so_far=0;
    }
    cout<<"\n the sum of continguous subarray is:"<<max;
    return 0;
}
