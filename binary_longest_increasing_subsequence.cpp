#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v={ 10, 22, 9, 33, 21, 50, 41, 60};
    
    vector<int> ans;            //declaring answer vector
    ans.push_back(v[0]);           //intialising the answer vector with first element of input vector
    for(int i=1;i<v.size();i++)
    {
        //if the current element is greater than the last element in answer vector then we push it into the answer vector
        if(v[i]>ans.back())     
        {
            ans.push_back(v[i]);
        }
        // else we find the first occurance of the element in input vector greater than current element using lower_bound function 
        else
        {                         
            int l=upper_bound(ans.begin(),ans.end(),v[i])-ans.begin();
            ans[l]=v[i];
        }
    }
    cout<<"\n the longest increasing subsequence length is:"<<ans.size();
    return 0;
}
