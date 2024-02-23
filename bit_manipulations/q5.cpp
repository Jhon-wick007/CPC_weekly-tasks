#include<bits/stdc++.h>
using namespace std;

class Solution
{
    int convert(vector<int> &v)
    {
        int res=0;
        for(int i=15;i>=0;i--)
        {
            res=res+v[i]*pow(2,15-i);
        }
        return res;
    }
  public:
        vector <int> rotate (int n, int d)
        {
            bitset<16> x(n);
            vector<int> v1,v2;
            for(int i=0;i<16;i++)
            {
                v1.push_back(x[i]);
                v2.push_back(x[i]);
            }
           
            int t=d;
            while(t!=0)
            {
                v1.push_back(v1[0]);
                v1.erase(v1.begin());
                t--;
            }
            t=d;
            while(t!=0)
            {
                v2.insert(v2.begin(),v2[15]);
                v2.pop_back();
                t--;
            }
            reverse(v1.begin(),v1.end());reverse(v2.begin(),v2.end());
            vector<int> res;
            res.push_back(convert(v2));
            res.push_back(convert(v1));
            
            return res;
        }
};

int main()
{
    int t; cin >> t;
    while (t--)
    {
        
        int n, d; cin >> n >> d;
        Solution ob;
        vector <int> res = ob.rotate (n, d);
        cout << res[0] << endl << res[1] << endl;
    }
}