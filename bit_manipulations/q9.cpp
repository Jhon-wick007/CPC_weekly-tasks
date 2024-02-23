#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
   
    unsigned int getFirstSetBit(int n)
    {
        bitset<32> x(n);int pos=1;
       
        for(int i=0;i<32;i++)
        {
            if(x[i]==1)
            break;
            pos+=1;
        }
        if(pos==33)
        return 0;
        else
        return pos;
    }
};
int main()
{
    int t;
    cin>>t; // testcases
    while(t--)
    {
        int n;
        cin>>n; //input n
        Solution ob;
        printf("%u\n", ob.getFirstSetBit(n));
    }
	return 0;
}