#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int findPosition(int N) {
        bitset<32> x(N);
        bool x1=false;int c=0,ind=0;
        for(int i=0;i<32;i++)
        {
            if(x[i]==1 && !x1 && c==0)
            {
                ind=i+1;
                c+=1;
                x1=true;
            }
            else if(x[i]==1 && x1 && c>0)
            {
                x1=false;
                c+=1;
            }
        }
        
        if(x1)
        return ind;
        else
        return -1;
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;

        cin>>N;

        Solution ob;
        cout << ob.findPosition(N) << endl;
    }
    return 0;
}