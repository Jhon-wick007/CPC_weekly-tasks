#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v={1, 23, 12, 9, 30, 2, 50};int k=3;
    sort(v.begin(),v.end());
    
    cout<<"\n the k largest elements are:"<<endl;int i=v.size()-1;
    while(k!=0)
    {
        cout<<v[i--]<<"\t";
        k--;
    }
    return 0;
}
