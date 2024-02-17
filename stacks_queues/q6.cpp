#include <iostream>
#include<bits/stdc++.h>

using namespace std;
void evaluate(string str)
{
    stack<int> value;stack<char> op;
    map<char,int> mp;
    mp['+']=1;mp['-']=1;
    mp['*']=2;mp['/']=2;
    for(int i=0;i<str.size();)
    {
        if(i<str.size() && str[i]>='0' && str[i]<='9')
        {
            int x=0,y;
            y=str[i]-48;
            x+=y;i++;
            while( i<str.size() && str[i]>='0' && str[i]<='9')
            {
                int y=str[i]-48;
                x=x*10+y;i++;
            }
            value.push(x);
        }
        else if( i<str.size() && str[i]==')')
        {
            while(op.top()!='(')
            {
                char x=op.top();op.pop();
                int v1=value.top();value.pop();
                int v2=value.top();value.pop();
                switch(x)
                {
                    case '+':
                    value.push(v1+v2);
                    break;
                    
                    case '-':
                    value.push(v2-v1);
                    break;
                    
                    case '*':
                    value.push(v1*v2);
                    break;
                    
                    case '/':
                    value.push(v2/v1);
                    break;
                }
            }
            op.pop();
            i++;
        }
        else
        {
            if(!op.empty() && (mp[op.top()]>=mp[str[i]]))
            {
                while( !op.empty() && (mp[op.top()]>=mp[str[i]]))
                {
                    char x=op.top();op.pop();
                    int v1=value.top();value.pop();
                    int v2=value.top();value.pop();
                    switch(x)
                    {
                        case '+':
                        value.push(v1+v2);
                        break;
                        
                        case '-':
                        value.push(v2-v1);
                        break;
                        
                        case '*':
                        value.push(v1*v2);
                        break;
                        
                        case '/':
                        value.push(v2/v1);
                        break;
                    }
                }
                op.push(str[i]);i++;
            }
            else
            {
                op.push(str[i]);
                i++;
            }
        }
    }
    
    while(!op.empty())
    {
        char x=op.top();op.pop();
        int v1=value.top();value.pop();
        int v2=value.top();value.pop();
        switch(x)
        {
            case '+':
            value.push(v1+v2);
            break;
            
            case '-':
            value.push(v2-v1);
            break;
            
            case '*':
            value.push(v1*v2);
            break;
            
            case '/':
            value.push(v2/v1);
            break;
        }
    }
    cout<<"\n the result is:"<<value.top();
}
int main()
{
    string str="100*2+12";
    evaluate(str);
    return 0;
}
