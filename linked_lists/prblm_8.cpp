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

struct node* middle(struct node *x,int n)
{
    n/=2;
    while(n!=0)
    {
        x=x->next;
        n-=1;
    }
    return x;
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
   struct node *x=middle(a,n);
   cout<<"\n the middle element is:"<<x->val;
   return 0;
}
