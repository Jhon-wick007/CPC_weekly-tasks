#include<bits/stdc++.h>
using namespace std;
class Solution
{
    void func(string str,int l,int r,set<string> &s)
    {
        if(l==r)
        s.insert(str);
        
        else
        {
            for(int i=l;i<=r;i++)
            {
                swap(str[i],str[l]);
                
                func(str,l+1,r,s);
                
                swap(str[i],str[l]);
            }
        }
    }
	public:
		vector<string>find_permutation(string S)
		{
		    set<string> s;
		    func(S,0,S.size()-1,s);
		    vector<string> res;
		    for(auto x:s)
		    {
		        res.push_back(x);
		    }
		    return res;
		}
};

int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    sort(ans.begin(),ans.end());
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}