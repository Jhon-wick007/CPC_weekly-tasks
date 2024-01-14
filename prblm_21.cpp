#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<vector<int>> v={{1,   2,   3,   4,  5,   6},{7,   8,   9,  10,  11,  12},{13,  14,  15, 16,  17,  18}};
    int c=1,i=0,j=0;
    while(c<=floor(sqrt(v.size()))+1)
    {
        for(;j<v[i].size()-c;j++)
        {
            cout<<v[i][j]<<"\t";
        }
        for(;i<v.size()-c;i++)
        {
            cout<<v[i][j]<<"\t";
        }
        for(;j>=c && i>c;j--)
        {
            cout<<v[i][j]<<"\t";
        }
        for(;i>c;i--)
        {
            cout<<v[i][j]<<"\t";
        }
        c+=1;
    }
    cout<<"\n"<<v[i][j];
    return 0;
}
