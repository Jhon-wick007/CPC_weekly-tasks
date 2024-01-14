#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<vector<int>> v={{10,20,30,40},{15,25,35,45},{27,29,37,48},{32,33,39,50}};
    int key;
    cout<<"\n enter a serach element:";
    cin>>key;
    int i=0,j=v[0].size()-1;
    while(i<v.size() && j>=0)
    {
        if(v[i][j]==key)
        {
            cout<<"\n the element found at:"<<i<<" "<<j;
            break;
        }
        if(v[i][j]>key)
        j--;
        else
        i++;
    }
    if(i>=v.size() || j<0)
    cout<<"\n the element is not found";
    return 0;
}
