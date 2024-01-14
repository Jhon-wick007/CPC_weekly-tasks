#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<vector<int>> v={{1,2,3},{4,5,6},{7,8,9}};
    vector<vector<int>> res;
    int i=0,j=0;
    while(i<v.size())
    {
        int k=i,l=j;vector<int> t;
        while(k!=j && l!=i)
        {
            t.push_back(v[k][l]);
            k--;l++;
        }
        t.push_back(v[k][l]);
        i+=1;j=0;
        res.push_back(t);
    }
    i=v.size()-1;j=1;int c=0;
    while(j<v[0].size())
    {
        int k=i,l=j;vector<int> t;
        for(;k>=c;l++)
        {
            t.push_back(v[k][l]);
            k--;
        }
        j++;c++;
        cout<<endl;
        res.push_back(t);
    }
    cout<<"\n the result is:"<<endl;
    for(i=0;i<res.size();i++)
    {
        for(int j=0;j<res[i].size();j++)
        {
            if(res[i][j]!=0)
            cout<<res[i][j]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}
