#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int countBitsFlip(int a, int b){
        
        bitset<32> num1(a),num2(b);
        int count=0;
        for(int i=0;i<32;i++)
        {
            if(num1[i]!=num2[i])
            count+=1;
        }
        return count;
    }
};
int main()
{
	int t;
	cin>>t;
	while(t--) 
	{
		int a,b;
		cin>>a>>b; 

        Solution ob;
		cout<<ob.countBitsFlip(a, b)<<endl;
	}
	return 0;
}