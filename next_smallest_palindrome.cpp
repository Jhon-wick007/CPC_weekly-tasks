#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void check(int *i,int *j,int size)    //determing the positions of i and j as per the input`s length
{
    if(size%2==0)
    {
        *i=size/2-1;
        *j=size/2;
    }
    else
    {
        *i=size/2-1;
        *j=size/2+1;
    }
}

/* This function  used to add 1`s to the middle element of input vector and cascade the carry over upto the position 0 in the vector
  then if carry over exists, we add it explicitly to resultant vector and to the stack then copying the element upto the middle element 
  to the resultant vector  the popping out the elements from stack to resultant vector */
vector<int> adding(vector<int> &v)         
{
    int car=0,ind=0;
    if(v.size()%2==0)
    ind=1;
    int i=v.size()/2;
    int t=v[i]+1;
    car=t/10;
    v[i]=t%10;i--;
    while(i>=0)
    {
        if(ind==1)
        {
            t=v[i]+1+car;
            car=t/10;
            v[i]=t%10;
            ind=0;i--;
        }
        else
        {
            t=v[i]+car;
            car=t/10;
            v[i]=t%10;
            i--;
        }
    }
    vector<int> res1;stack<int> st;
    if(car!=0)
    res1.push_back(car),st.push(car);
    if(v.size()%2!=0)
    {
        for(int k=0;k<=v.size()/2;k++)
        {
            res1.push_back(v[k]);
            st.push(v[k]);
        }st.pop();
    }
    else
    {
        for(int k=0;k<v.size()/2;k++)
        {
            res1.push_back(v[k]);
            st.push(v[k]);
        }
    }
    while(!st.empty())
    {
        res1.push_back(st.top());
        st.pop();
    }
    return res1;
}
/* this function  does the same thing as pervious expect it does not include the adding 1`s to middle element*/
vector<int> adding1(vector<int> &v,int i,int j)
{
    vector<int> res;stack<int> st;
    for(int k=0;k<=i;k++)
    {
        res.push_back(v[k]);
        st.push(v[k]);
    }
    for(int k=i+1;k<j;k++)
    {
        res.push_back(v[k]);
    }
    while(!st.empty())
    {
        res.push_back(st.top());
        st.pop();
    }
    return res;
}
int main()
{
    vector<int> v={1,2,5,3,2,2};
    int x=count(v.begin(),v.end(),9);
    /* this part checks if all elements are 9*/
    if(x==v.size())
    {
        v[0]=1;
        for(int i=1;i<v.size();i++)
        {
            v[i]=0;
        }
        v.push_back(1);
      
        //printing the result
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
    }
    else
    {
        int i,j;vector<int> res;
        check(&i,&j,v.size());
        while(i>=0 && j<v.size())   //this while loop skips the elements positions i and j that are equal to each other
        {
            if(v[i]!=v[j])
            break;
            i--;j++;
        }
        if(i<0 && j>=v.size())
        res=adding(v);
        else if(v[i]<v[j])
        res=adding(v);
        else
        res=adding1(v,i,j);
        
        for(i=0;i<res.size();i++)
        {
            cout<<res[i]<<" ";
        }
    }
    
    return 0;
}
