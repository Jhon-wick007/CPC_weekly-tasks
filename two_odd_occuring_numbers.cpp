#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v={ 2, 3, 7, 9, 11, 2, 3, 11 };
    int xors=v[0];              // Will hold XOR of two odd occurring elements 
    int bits;                  //Will have only single set bit of xor2 
    int x=0,y=0;               
    
    for(int i=1;i<v.size();i++)    /* Get the xor of all elements in arr[]. The xor will basically 
                                    be xor of two odd occurring elements */
    {
        xors=xors^v[i];
    }
    /* Get one set bit in the xor2. We get rightmost set bit in the following line as it is easy to get */
    bits=xors & ~(xors-1);    
    
    /* Now divide elements in two sets: 
     The elements having the corresponding bit as 1. 
    The elements having the corresponding bit as 0. */
    for(int i=0;i<v.size();i++)
    {
        if(v[i] & bits)
        x=x^v[i];
        else
        y=y^v[i];
    }
    cout<<"\n the two odd occuring numbers are:"<<x<<" "<<y;
    return 0;
}
