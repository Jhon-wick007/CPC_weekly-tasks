#include <iostream>
#include<bits/stdc++.h>

using namespace std;


struct node
{
    int val;
    struct node *next;
};

struct node* cycle(struct node *x)
{
    vector<int> v;
    while(x!=NULL)
    {
        vector<int>::iterator it=find(v.begin(),v.end(),x->val);
        if(it==v.end())
        v.push_back(x->val);
        else
        return x;
        x=x->next;
    }
    return NULL;
}
int main()
{
    struct node *a,*b,*c;
    a=new node;
    int n;
    cout<<"\n enter the number of elements:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            cout<<"\n enter the element"<<i+1<<":";
            cin>>a->val;
            a->next=NULL;
            b=a;
            cout<<endl;
        }
        else
        {
            c=new node;
            cout<<"\n enter the element"<<i+1<<":";
            cin>>c->val;
            c->next=NULL;
            b->next=c;
            b=c;
            cout<<endl;
        }
    }
    struct node *t=a;
    while(t!=NULL)
    {
        if(t->val==3)
        {
            b->next=t;
            break;
        }
        t=t->next;
    }
   struct node *x=cycle(a);
   if(x!=NULL)
   cout<<"\n the loop exists in:"<<x->val<<endl;
   else
   cout<<"\n loop doesn`t exist"<<endl;
     return 0;
}
