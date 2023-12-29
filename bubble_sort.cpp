#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v={64, 25, 12, 22, 11,-9,12};int t;
    
    /* In this algorithm we declare a boolean variable s to indentify if there occurs a swapping or not,
       then the variable i is intialased to 0 and j is also intialsised to j and that runs the inner loop
       upto n-i-1 times, each time inner loop finishes, greatest element will be in their correct position 
       when swapping occurs, s changes to true, after the inner loop finushes it checks whether s is false or 
       not, if it is false means the outer loop is broken, even though it has a limit of n-1 times */
       
    bool s;
    for(int i=0;i<v.size()-1;i++)
    {
        s=false;
        for(int j=0;j<v.size()-i-1;j++)
        {
            if(v[j]>v[j+1])
            {
                t=v[j];
                v[j]=v[j+1];
                v[j+1]=t;
                s=true;
            }
        }
        if(s==false)
        break;
    }
    
    cout<<"\n the sorted array is:"<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<"\t";
    }
    return 0;
}
