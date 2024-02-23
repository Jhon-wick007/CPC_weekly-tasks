#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    long long reversedBits(long long X) {
        bitset<32> num(X);int x;
       int i=0,j=31;
       while(i<j)
       {
           x=num[i];
           num[i]=num[j];
           num[j]=x;
           i++;j--;
       }
        long long unsigned int res=num.to_ulong();
        return res;
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long X;
        
        cin>>X;

        Solution ob;
        cout << ob.reversedBits(X) << endl;
    }
    return 0;
}