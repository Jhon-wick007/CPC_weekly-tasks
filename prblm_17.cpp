#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v={1, 60, -10, 70, -80, 85};
    sort(v.begin(),v.end());
    int res=INT_MAX,min_l=0,min_r=v.size()-1;int l=0,r=v.size()-1;
    while(l<r)
    {
        int sum=v[l]+v[r];
        if(abs(res)>abs(sum))
        {
            res=abs(sum);
            min_l=l;
            min_r=r;
        }
        if(sum<0)
        l++;
        else
        r--;
    }
    cout<<"\n the elements are:"<<v[min_l]<<" "<<v[min_r];
    return 0;
}
