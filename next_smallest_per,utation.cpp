#include<iostream>
#include<bits/stdc++.h>

using namespace std;


int main()
{
    vector<int> v={1,2,3,4,5,6,7,8,4,9,8,7,6,5,4,3,2,1};int i;
    for(i=v.size()-1;i>0;i--)
    {
        if(v[i-1]<v[i])
        break;
    }int k=v[i],inx=i;
/* In this part we traverse the vector in reverse order until we found v[i-1]<v[i], then we search for an element from vector that larger than v[i-1]
    but smaller than all elements from right side upto the end of the vector. Then we bring this element to left of element v[i-1], then we sort the elements from v[i]
    to v[n-1] , thus we arrived at our result */
    if(i-1>=0)
    {
        int j;
        for(j=i+1;j<v.size();j++)
        {
            if(v[j]>v[i-1] && k>v[j])
            k=v[j],inx=j;
        }j=inx;
        while(j-i+1!=0)
        {
            swap(v[j],v[j-1]);
            j--;
        }
        sort(v.begin()+i,v.end());
        cout<<"\n the result is:"<<endl;
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
    }
      /* if we don`t find elements v[i-1]<v[i], then there is no solution */
    else
    cout<<"\n solution doesn`t exist";
    return 0;
}
