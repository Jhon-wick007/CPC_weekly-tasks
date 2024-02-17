
#include<bits/stdc++.h>

using namespace std;

struct node
{
    int val,num;
};
class twoStacks
{
    vector<struct node> v;
    public:
    
    twoStacks()
    {
        vector<struct node> t;
        v=t;
    }
 
    void push1(int x)
    {
        struct node temp;
        temp.val=x;
        temp.num=1;
        v.push_back(temp);
    }
    
    void push2(int x)
    {
       struct node temp;
       temp.val=x;
       temp.num=2;
       v.push_back(temp);
    }
    
    int pop1()
    {
        int res=-1,i;
        for(i=v.size()-1;i>=0;i--)
        {
            if(v[i].num==1)
            {
                res=v[i].val;
                v.erase(v.begin()+i);
                return res;
            }
        }
        return res;
    }
    
    int pop2()
    {
       int res=-1,i;
        for(i=v.size()-1;i>=0;i--)
        {
            if(v[i].num==2)
            {
                res=v[i].val;
                v.erase(v.begin()+i);
                return res;
            }
        }
        return res;
    }
};


int main()
{

    int T;
    cin>>T;
    while(T--)
    {
        twoStacks *sq = new twoStacks();

        int Q;
        cin>>Q;
        while(Q--){
        int stack_no;
        cin>>stack_no;
        int QueryType=0;
        cin>>QueryType;
        
        if(QueryType==1)
        {
            int a;
            cin>>a;
            if(stack_no ==1)
            sq->push1(a);
            else if(stack_no==2)
            sq->push2(a);
        }else if(QueryType==2){
        	if(stack_no==1)
            cout<<sq->pop1()<<" ";
            else if(stack_no==2)
            cout<<sq->pop2()<<" ";

        }
        }
        cout<<endl;
    }
}