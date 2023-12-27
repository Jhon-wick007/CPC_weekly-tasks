#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> inp={1, 2, 3, 2, 3, 1, 3};          //Declaring and intialising input
    vector<int> temp,count;                          // Declaring vectors for output 
    
    /* Here we first we check if we have already included an element from input vector
    if it is not there means, we include it in the temp vector and insert 1 inside count vector
    but if it is already present means, we just incrementing the ciunt in its corresponding index
    */
    
    for(int i=0;i<inp.size();i++)
    {
        vector<int>::iterator it=find(temp.begin(),temp.end(),inp[i]);
        if(it==temp.end())
        {
            temp.push_back(inp[i]);
            count.push_back(1);
        }
        else
        count[it-temp.begin()]+=1;
    }
    
    for(int i=0;i<count.size();i++)  //printing the element which has odd number of count 
    {
        if(count[i]%2!=0)
        cout<<temp[i]<<" ";
    }
    return 0;
}
