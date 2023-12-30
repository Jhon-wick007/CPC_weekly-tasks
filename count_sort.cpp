#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v={2,5,3,0,2,3,0,3};
    int max=*max_element(v.begin(),v.end());  //taking the maximum element from input vector
    vector<int> count(max+1,0);               // declaring and intialisng count vector with size max+1 and intialised to 0
    for(int i=0;i<v.size();i++)      //updating the count of each unique element in the corresponding index of count vector
    {
        count[v[i]]+=1;
    }
    for(int i=1;i<count.size();i++)   //taing prefix sum
    {
        count[i]=count[i]+count[i-1];
    }
    vector<int> out(v.size());        //declaring output variable 
    for(int i=v.size()-1;i>=0;i--)   //placing the input variable in the corresponding position of output vector 
    {
        out[count[v[i]]-1]=v[i];
        count[v[i]]-=1;
    }
    cout<<"\n the sorted vector is:"<<endl;
    for(int i=0;i<out.size();i++)
    {
        cout<<out[i]<<"\t";
    }
    return 0;
}
