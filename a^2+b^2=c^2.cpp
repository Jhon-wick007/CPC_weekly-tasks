#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v;int N;
    cout<<"\n enter the N value:"<<endl;
    cin>> N;
    for(int i=1;i<=N;i++)
    {
        v.push_back(i*i);
    }
    /* finding the triples that satisfies a^2+b^2=c^2 */ 
    
    cout<<"\n the triplets are:"<<endl;
    for(int i=0;i<N-1;i++)
    {
        for(int j=i+1;j<N;j++)
        {
            int sum=v[i]+v[j];
            vector<int>::iterator it=find(v.begin(),v.end(),sum);
            if(it!=v.end())
            cout<<sqrt(v[i])<<"\t"<<sqrt(v[j])<<"\t"<<sqrt(*it)<<endl;
        }
    }
    return 0;
}
