#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string removeChars(string string1, string string2) {
        string res="";
        for(int i=0;i<string1.size();i++)
        {
            string::iterator it=find(string2.begin(),string2.end(),string1[i]);
            if(it==string2.end())
            res+=string1[i];
        }
        
        return res;
        
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        string string1,string2;
        cin >> string1; 
        cin >> string2;
        Solution ob;
        cout << ob.removeChars(string1,string2) << endl;
    }
    return 0;
}