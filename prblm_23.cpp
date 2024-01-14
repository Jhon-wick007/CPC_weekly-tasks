#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v={2, 5, 2, 6, -1, 9999999, 5, 8, 8, 8};
    vector<int> count,el;
    for(int i=0;i<v.size();i++)
    {
        vector<int>::iterator it=find(el.begin(),el.end(),v[i]);
        if(it==el.end())
        {
            el.push_back(v[i]);
            count.push_back(1);
        }
        else
        count[it-el.begin()]+=1;
    }int j=0;
    
    while(count.size()!=0)
    {
        vector<int>::iterator it=max_element(count.begin(),count.end());
        int x=*it;
        while(x!=0)
        {
            v[j]=el[it-count.begin()];
            x--;j++;
        }
        count.erase(it);
        el.erase(el.begin()+(it-count.begin()));
    }
    cout<<"\n the resultant vector is:"<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<"\t";
    }
    return 0;
}
