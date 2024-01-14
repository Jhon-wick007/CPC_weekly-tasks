#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v={4,2,-3,1,6};
    unordered_set<int> st;
    int sum=0,i;
    for(i=0;i<v.size();i++)
    {
        sum+=v[i];
        if(sum==0 || st.find(sum)!=st.end())
        {
            cout<<"\n exists";
            break;
        }
        st.insert(sum);
    }
    if(i==v.size())
    cout<<"\n doesn`t exists";
    return 0;
}
