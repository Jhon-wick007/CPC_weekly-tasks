#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v={1, 2, 4, 6, 3, 7, 8};
    int n=v.size();
    n+=1;                                           // actual number of elements is n
    int sum=(n*(n+1))/2;                            //finding the sum of n natural numbers
    int actual=accumulate(v.begin(),v.end(),0);    //finding the sum of integers in input 
    cout<<"\n the missing number is:"<<sum-actual;   //printing the result
    return 0;
}
