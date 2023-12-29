#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v={64, 25, 12, 22, 11,-9};int t;
    
    /* Here we declare two variables i snd j where i<j such that in every iteration of j element at j 
    is compared with element at i, if arr[i]>arr[j] means they are swapped and this process continues until 
    i exceeds the array limit */ 
    
    for(int i=0;i<v.size()-1;i++)  
    {
        for(int j=i+1;j<v.size();j++)
        {
            if(v[i]>v[j])
            {
                t=v[i];
                v[i]=v[j];
                v[j]=t;
            }
        }
    }
    cout<<"\n the sorted array is:"<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<"\t";
    }
    return 0;
}
