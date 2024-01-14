#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v={100, 180, 260, 310, 40, 535, 695};
    int max=0;
    for(int i=1;i<v.size();i++)
    {
        if(v[i]>v[i-1])
        max+=v[i]-v[i-1];
    }
    cout<<"\n the result is:"<<max;
    return 0;
}
