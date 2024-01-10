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
struct node* del_first(struct node *x)
{
    struct node *y=x->next;
    x->next=NULL;
    x=y;
    return x;
}
struct node* del_middle(struct node *x,int y)
{
    struct node *a,*b,*c;
    a=x;
    b=a->next;c=b->next;
    
    while(b->next!=NULL)
    {
        if(b->val==y)
        {
            b->next=NULL;
            a->next=c;
            return x;
        }
        a=a->next;
        b=b->next;
        c=c->next;
    }
    return NULL;
}
struct node *del_last(struct node *x)
{
    struct node *y=x->next,*t=x;
    while(y->next!=NULL)
    {
        x=x->next;
        y=y->next;
    }
    x->next=NULL;
    return t;
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
    
    a=del_first(a);cout<<"\n after deleting the first element:"<<endl;
    print(a);
    int y;
    cout<<"\n enter any element:"<<endl;
    cin>>y;
    struct node *x=del_middle(a,y);
    if(x==NULL)
    cout<<"\n the given element is not there";
    else
    {
        a=x;
        cout<<"\n after deleting the given middle element:"<<endl;
    }
    print(a);
    a=del_last(a);
    cout<<"\n after deleting last element:"<<endl;
    print(a);
     return 0;
}
