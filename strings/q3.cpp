#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    char nonrepeatingCharacter(string S)
    {
       map<char,int> mp;
       for(int i=0;i<S.size();i++)
       {
           mp[S[i]]+=1;
       }
       
       for(int i=0;i<S.size();i++)
       {
           if(mp[S[i]]==1)
           return S[i];
       }
       
       return '$';
       
    }

};

int main() {
	
	int T;
	cin >> T;
	
	while(T--)
	{
	
	    string S;
	    cin >> S;
	    Solution obj;
        char ans = obj.nonrepeatingCharacter(S);
        
        if(ans != '$')
	    cout << ans;
        else cout << "-1";
            
        cout << endl;
	    
	}
	
	return 0;
}