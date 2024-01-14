#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<vector<int>> v={{1,0,0,1},{0,0,1,0},{0,0,0,0}};
    vector<pair<int,int>> temp;
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v[i].size();j++)
        {
            if(v[i][j]==1)
            temp.push_back(make_pair(i,j));
        }
    }
    for(int i=0;i<temp.size();i++)
    {
        for(int l=temp[i].second-1;l>=0;l--)
        {
            v[temp[i].first][l]=1;
        }
        for(int l=temp[i].second+1;l<v[0].size();l++)
        {
            v[temp[i].first][l]=1;
        }
        for(int k=temp[i].first-1;k>=0;k--)
        {
            v[k][temp[i].second]=1;
        }
        for(int k=temp[i].first+1;k<v.size();k++)
        {
            v[k][temp[i].second]=1;
        }
    }
    cout<<"\n the result is:"<<endl;
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v[0].size();j++)
        {
            cout<<v[i][j]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}
