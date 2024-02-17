#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    long long getMaxArea(long long arr[], int n)
    {
        long long res=INT_MIN;
        for(int i=0;i<n;i++)
        {
            int x=i-1,y=i+1;
            while(x>=0)
            {
                if(arr[x]>=arr[i])
                x--;
                else
                break;
            }
            x++;
            
            while(y<n)
            {
                if(arr[y]>=arr[i])
                y++;
                else
                break;
            }
            
            y--;
            
            int temp=arr[i]*(y-x+1);
            if(temp>res)
            res=temp;
        }
        
        return res;
    }
};


int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.getMaxArea(arr, n)<<endl;
    
    }
	return 0;
}