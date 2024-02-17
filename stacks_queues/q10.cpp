#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> max_of_subarrays(vector<int> arr, int n, int k) {
       vector<int> res;
      int i=0,j=k-1,ind;
      vector<int>::iterator it=max_element(arr.begin(),arr.begin()+k);
      res.push_back(*it); i++;j++;
      ind=it-arr.begin();
      for(;j<arr.size();i++,j++)
      {
          if(i>ind)
          {
              it=max_element(arr.begin()+i,arr.begin()+j+1);
              ind=it-arr.begin();
              res.push_back(*it);
          }
          else
          {
              if(arr[ind]<arr[j])
              ind=j;
              
              res.push_back(arr[ind]);
          }
      }
      
      return res;
    }
};


int main() {

    int t;
    cin >> t;

    while (t--) {

        int n, k;
        cin >> n >> k;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        Solution ob;
        vector<int> res = ob.max_of_subarrays(arr, n, k);
        for (int i = 0; i < res.size(); i++) cout << res[i] << " ";
        cout << endl;
    }

    return 0;
}
