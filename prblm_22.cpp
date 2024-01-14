#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v={10, 3, 5, 6, 2};
    int prod=1;
    for(int i=0;i<v.size();i++)
    {
        prod*=v[i];
    }
    for(int i=0;i<v.size();i++)
    {
        v[i]=prod/v[i];
    }
    cout<<"\n the resltant array is:"<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<"\t";
    }
    return 0;
}
