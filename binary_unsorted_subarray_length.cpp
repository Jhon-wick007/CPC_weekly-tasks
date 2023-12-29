#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v={10, 12, 20, 30, 25, 40, 32, 31, 35, 50, 60};
    int s,e,min,max;
    /* checking for the element index which is greater than ther next element*/
    for(int i=0;i<v.size()-1;i++)
    {
        if(v[i]>v[i+1])
        {
            s=i;
            break;
        }
    }
    if(s==v.size()-1)
    cout<<"\n the array is already sorted"<<endl;
    
    else
    {
        /* checking for the element index which is smaller than previous element */
        for(int i=v.size()-1;i>0;i--)
        {
            if(v[i-1]>v[i])
            {
                e=i;
                break;
            }
        }
        
        min=*min_element(v.begin()+s-1,v.begin()+e);
        max=*max_element(v.begin()+s-1,v.begin()+e);
        /* checking for element which is even greater than the min element from 0 to s-1 */ 
        for(int i=0;i<s;i++)
        {
            if(v[i]>min)
            {
                s=i;
                break;
            }
        }
        /* checking for the element which is greater than the max elwement from n-1 to e+1 */ 
        for(int i=v.size()-1;i>=e+1;i--)
        {
            if(v[i]<max)
            {
                e=i;
                break;
            }
        }
        cout<<"\n the indices are:"<<s<<" "<<e<<endl;
    }
    return 0;
}
