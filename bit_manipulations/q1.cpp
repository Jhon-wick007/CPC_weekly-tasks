#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    bool isPowerofTwo(long long n){
        if(n>0)
        {
            int x=log2(n);
            if(pow(2,x)==n)
            return true;
            else
            return false;
        }
        return false;
        
    }
};
int main()
{

    int t;
    cin>>t;//testcases

    for(int i=0;i<t;i++)
    {
        long long n;
        cin>>n;

        Solution ob;
         if(ob.isPowerofTwo(n))
             cout<<"YES"<<endl;
         else
            cout<<"NO"<<endl;

    }

    return 0;
}