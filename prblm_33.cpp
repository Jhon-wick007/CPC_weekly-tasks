#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<vector<int>> v={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    vector<vector<int>> v1(v[0].size(),vector<int>(v.size(),0));
    
    for(int i=0;i<v1.size();i++)
    {
        for(int j=0;j<v1[i].size();j++)
        {
            v1[i][j]=v[j][i];
        }
    }
    cout<<"\n the result is:"<<endl;
    for(int i=0;i<v1.size();i++)
    {
        for(int j=0;j<v1[i].size();j++)
        {
            cout<<v1[i][j]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}
