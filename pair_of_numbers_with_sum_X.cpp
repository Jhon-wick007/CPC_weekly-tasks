#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v={0, -1, 2, -3, 1};int x=-2;
    
    /* checking whether sum of pair of elwments exist or not*/ 
    for(int i=0;i<v.size()-1;i++)
    {
        int j;
        for(j=i+1;j<v.size();j++)
        {
            if(v[i]+v[j]==x)
            {
                cout<<"\n solution exist";
                break;
            }
        }
        if(j<v.size())
        break;
    }
    return 0;
}
