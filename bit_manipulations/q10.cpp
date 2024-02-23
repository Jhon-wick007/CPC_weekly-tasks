#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
  
    unsigned int swapBits(unsigned int n)
    {
    	bitset<32> x(n);int y;
    	for(int i=0;i<32;i+=2)
    	{
    	   y=x[i];
    	   x[i]=x[i+1];
    	   x[i+1]=y;
    	}
    	return x.to_ulong();
    }
};

int main()
{
	int t;
	cin>>t;//testcases
	while(t--)
	{
		unsigned int n;
		cin>>n;
		
		Solution obj;
		cout << ob.swapBits(n) << endl;
	}
	return 0;
}