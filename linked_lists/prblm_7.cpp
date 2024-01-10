#include <iostream>
#include<bits/stdc++.h>

using namespace std;


struct node
{
    int val;
    struct node *next;
};

void print(struct node *x)
{
    while(x!=NULL)
    {
        cout<<x->val<<"\t";
        x=x->next;
    }
}

struct node* cycle(struct node *x)
{
    struct node *t=x;
   vector<struct node*> v;
   v.push_back(x);
   while(x!=NULL)
   {
       vector<struct node *>::iterator it=find(v.begin(),v.end(),x->next);
       if(it!=v.end())
       {
           cout<<"\n loop found at:"<<x->next->val;
           x->next=NULL;
           return t;
       }
       v.push_back(x->next);
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
   {
       cout<<"\n list after the loop has been released:"<<endl;
       print(x);
   }
   else
   cout<<"\n there is no loop"<<endl;
     return 0;
}
