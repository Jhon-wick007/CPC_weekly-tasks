#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int func(vector<int> &v,int x)
{
    int res=INT_MAX;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]<res && v[i]>x)
        res=v[i];
    }
    return res;
}
int main()
{
   vector<int> v={1, 1, 0, -1, -2};
   int x=INT_MIN,y=0;
   for(int i=0;i<v.size();i++)
   {
       if(v[i]<0 && x<v[i])
       x=v[i];
   }
   while(1)
   {
       y=func(v,y);
       if(x<0 && y>1)
       {
           cout<<"\n the result is:"<<1<<endl;
           break;
       }
       else if(x<0 && y==1)
       x=y;
       
       else if(x>0 && (y-x)>1)
       {
           cout<<"\n the result is:"<<x+1<<endl;
           break;
       }
       else if(x>0 && y-x==1)
       x=y;
   }
    return 0;
}
