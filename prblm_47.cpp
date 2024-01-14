#include <iostream>
#include<bits/stdc++.h>

using namespace std;


int main()
{
  vector<int> v={1, 6, 3, 1, 3, 6, 6 };
  vector<int> res;
  
  for(int i=0;i<v.size();i++)
  {
      int ind=v[i]%v.size();
      v[ind]+=v.size();
  }
  
  for(int i=0;i<v.size();i++)
  {
      if(v[i]/v.size()>=2)
      res.push_back(i);
  }
  
  cout<<"\n the result is:"<<endl;
  for(int i=0;i<res.size();i++)
  {
      cout<<res[i]<<"\t";
  }
    return 0;
}
