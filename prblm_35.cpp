#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v={3, 4, 5, 6, 7, 1, 2};int d=2;
    while(d!=0)
    {
        int x=v[0];
        for(int i=1;i<v.size();i++)
        {
            swap(v[i-1],v[i]);
        }
        v[v.size()-1]=x;
        d--;
    }
    cout<<"\n the result is:"<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<"\t";
    }
    return 0;
}
