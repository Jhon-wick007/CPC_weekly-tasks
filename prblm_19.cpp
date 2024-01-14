#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v={1,4,2,5,0};
    for(int i=0;i<v.size();i++)
    {
        int s1=accumulate(v.begin(),v.begin()+i,0);
        int s2=accumulate(v.begin()+i,v.end(),0)-v[i];
        cout<<s1<<" "<<s2<<endl;
        if(s1==s2)
        {
            cout<<"\n the index is:"<<i;
            break;
        }
    }
    return 0;
}
