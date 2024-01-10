#include <iostream>
#include<bits/stdc++.h>

using namespace std;


struct node
{
    int val;
    struct node *next;
};


void print(struct node *x,struct node *y)
{
    while(x->next!=NULL)
    {
        cout<<x->val<<"->";
        x=x->next;
    }
    cout<<x->val<<endl;
    while(y->next!=NULL)
    {
        cout<<y->val<<"->";
    }
    if(y!=NULL)
    cout<<y->val;
}

struct node *inter(struct node *x,struct node *y)
{
    vector<struct node *> v;
    while(x!=NULL)
    {
        v.push_back(x);
        x=x->next;
    }
    while(y!=NULL)
    {
        vector<struct node *>::iterator it=find(v.begin(),v.end(),y);
        if(it!=v.end())
        return y;
        
        y=y->next;
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
   struct node *a1,*b1,*c1;
   int m,d;
   cout<<"\n enter the number of elements in list 2:"<<endl;
   cin>>m;
   if(m>n)
   d=m-n;
   else if(m<n)
   d=n-m;
   else
   d=0;
   for(int i=0;i<d;i++)
   {
       if(i==0)
       {
           a1=new node;
           cout<<"\n enter any element of"<<"from list2"<<endl;
           cin>>a1->val;a1->next=NULL;
           b1=a1;
       }
       else
       {
           c1=new node;
           cout<<"\n enter any element of"<<"from list2"<<endl;
           cin>>c1->val;c1->next=NULL;
           b1->next=c1;
           b1=c1;
       }
   }
   if(d>0)
   {
       struct node *t=a;
       for(int i=0;i<d;i++)
       {
           t=t->next;
       }
       b1->next=t;
      t=a1;
      while(t!=NULL)
      {
          cout<<t->val<<"\t";
          t=t->next;
      }
       struct node* x=inter(a,a1);
       cout<<"\n the intersection point is:"<<x->val;
       cout<<"\n the created lists are:"<<endl;
        print(a,a1,d);
       //print(a,a1,x);
   }
   if(d==0)
   {
       int m1;
       cout<<"\n enter the index where you want connection:"<<endl;
       cin>>m1;
       
       for(int i=0;i<m1;i++)
       {
           if(i==0)
           {
               a1=new node;
               cout<<"\n enter any element of"<<i+1<<"from list2"<<endl;
               cin>>a1->val;
               b1=a1;
           }
           else
           {
               c1=new node;
               cout<<"\n enter any element of"<<i+1<<"from list2"<<endl;
               cin>>c1->val;c1->next=NULL;
               b1->next=c1;
               b1=c1;
           }
       }
       struct node *t=a;
       for(int i=0;i<m1;i++)
       {
           t=t->next;
       }
       b1->next=t;
       print(a,a1,m1);
       struct node *x=inter(a,a1);
       cout<<"\n the intersection point is:"<<x->val;
       cout<<"\n the created lists are:"<<endl;
       //print(a,a1,x);
   }
   return 0;
}
