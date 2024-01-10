#include <iostream>
#include<bits/stdc++.h>

using namespace std;


struct node
{
    int val;
    struct node *next;
};

void recur(struct node *a,vector<int> &v2)
{
    if(a->next!=NULL)
    recur(a->next,v2);
    
    v2.push_back(a->val);
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
    
    vector<int> v1,v2;
    struct node *t=a;
    while(t!=NULL)
    {
        v1.push_back(t->val);
        t=t->next;
    }
    
    recur(a,v2);
    if(v1==v2)
    cout<<"\n it is palindrome";
    else
    cout<<"\n it is not a palindrome";
     return 0;
}
