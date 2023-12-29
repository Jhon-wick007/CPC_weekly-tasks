#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int binary(vector<int> &v, int l,int r,int k) //Implementation of binary search algorithm
{
    while(l<=r)
    {
        int m=(l+r)/2;
        if(v[m]==k)
        return m;
        else if(v[m]<k)
        l=m+1;
        else
        r=m-1;
    }
    return -1;
}
int main()
{
    vector<int> v={ 1, 2, 2, 2, 2, 3, 4, 7, 8, 8 };
    int k=2;
    int x=binary(v,0,v.size()-1,k);
    if(x==-1)
    cout<<"\n element not found"<<endl;
    else
    {
        int count=1;
        for(int i=x-1;i>=0;i--)  // traversing to count the occurance of element from x-1 to 0
        {
            if(v[i]==k)
            count+=1;
        }
        for(int i=x+1;i<v.size();i++) //traversing t count the occurance of element from x+1 to n-1
        {
            if(v[i]==k)
            count+=1;
        }
        cout<<"\n the occurance of given element is:"<<count<<endl;
    }
    return 0;
}
