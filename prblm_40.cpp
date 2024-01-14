#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v={3, 3, 4, 2, 4, 4, 2, 4, 4};
    vector<int> el,count;
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
    }
    cout<<"\n the maximum occuring elements is:";
    for(int i=0;i<count.size();i++)
    {
        if(count[i]>v.size()/2)
        cout<<el[i]<<"\t";
    }
    return 0;
}
