#include <bits/stdc++.h>
using namespace std;

string encode(string src);    
 
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}

string encode(string src)
{     
  string str="";
  char x=src[0];int c=0;
  for(int i=0;i<src.size();i++)
  {
      if(x==src[i])
      c++;
      else
      {
          char y=c+48;
          str=str+x+y;
          c=1;x=src[i];
      }
  }
  char y=c+48;
  str=str+x+y;
  
  return str;
}     
 
