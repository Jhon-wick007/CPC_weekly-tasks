#include <iostream>
#include<bits/stdc++.h>

using namespace std;

struct node
{
    int val,tim;
};

void insert(vector<struct node> &v,int value,int *t)
{
    bool ind=false;int i;
    for(i=0;i<v.size();i++)
    {
        if(v[i].val==value)
        {
            ind=true;
            break;
        }
    }
    if(!ind)
    {
        int min=INT_MAX,indx=0;
        for(i=0;i<v.size();i++)
        {
            if(min>v[i].tim)
            min=v[i].tim,indx=i;
        }
        v[indx].val=value;
        v[indx].tim=*t;
    }
    else
    {
        v[i].tim=*t;
    }
}

void get(vector<struct node> &v,int value,int *t)
{
    bool ind=false;int i;
    for(i=0;i<v.size();i++)
    {
        if(v[i].val==value)
        {
            ind=true;
            break;
        }
    }
   if(!ind)
   cout<<"\n element is not found";
   else
   {
       v[i].tim=*t;
       cout<<"\n the element is found";
   }
}
int main()
{
    int n=3,op,tim1=0;
    vector<struct node> v(n);
    for(int i=0;i<n;i++)
    {
        struct node temp;
        temp.val=0;
        temp.tim=0;
        v.push_back(temp);
    }
    while(1)
    {
        cout<<"\n enter your option:";
        cin>>op;
        switch(op)
        {
            case 1:
            cout<<"\n insertion";
            int x;
            cout<<"\n enter a value to be inserted:";
            cin>>x;tim1++;
            insert(v,x,&tim1);
            break;
            
            case 2:
            cout<<"\n get value";
            int x1;
            cout<<"\n enter a value to get:";
            cin>>x1;
            tim1++;
            get(v,x1,&tim1);
            break;
            
            case 3:
            cout<<"\n end of input";
            break;
        }
        
        if(op==3)
        break;
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<v[i].val<<" "<<v[i].tim<<endl;
    }
    return 0;
}
