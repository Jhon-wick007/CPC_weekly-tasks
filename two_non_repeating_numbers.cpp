#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v={ 2, 3, 7, 9, 11, 2, 3, 11 };
    vector<int> temp,count;

    /*  Here we first we check if we have already included an element from input vector
    if it is not there means, we include it in the temp vector and insert 1 inside count vector
    but if it is already present means, we just incrementing the ciunt in its corresponding index
    */
    
    for(int i=0;i<v.size();i++)
    {
        vector<int>::iterator it=find(temp.begin(),temp.end(),v[i]);
        if(it==temp.end())
        {
            temp.push_back(v[i]);
            count.push_back(1);
        }
        else
        count[it-temp.begin()]+=1;
    }
    cout<<"\n the results are:"<<endl;  //printing the results
    for(int i=0;i<count.size();i++)
    {
        if(count[i]==1)
        cout<<temp[i]<<"\t";
    }
    return 0;
}
