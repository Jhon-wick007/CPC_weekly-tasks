#include <bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    bool isAnagram(string a, string b){
        
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        
        return (a==b)?true:false;
    }

};

int main() {
    
    int t;

    cin >> t;

    while(t--){
        string c, d;

        cin >> c >> d;
        Solution obj;
        if(obj.isAnagram(c, d)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}