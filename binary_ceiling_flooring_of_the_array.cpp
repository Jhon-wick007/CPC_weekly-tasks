#include <iostream>
#include<bits/stdc++.h>

using namespace std;

/* In this function we find the ceil by checking the middle element, if it is equal to the required 
   element means, we return it, else if it is greater than the given element and smaller than the 
   ce value, then we update the ce value to the current one and decreament the higher index value by one,
   if the middle value is smaller than the given element means we increament the least index value to mid+1,
   or, if the current value is larger but smaller than currrent value means, we decreament the current value by 1 */
void ceil(vector<int> &v,int l,int r,int *ce,int k)
{
    while(l<=r)
    {
        int m=(l+r)/2;
        if(v[m]==k)
        {
            *ce=v[m];
            return;
        }
        else if(v[m]<k)
        l=m+1;
        else if(v[m]>k && *ce>=v[m])
        {
            *ce=v[m];
            r-=1;
        }
        else if(v[m]>k && *ce<v[m])
        l-=1;
        else
        return;
    }
}
/* In this function we find the floor function by comparing  the middle element within l-r by
   if it is equal to given element means, we return it, or if it is grater than the given element means, we decreament the higher index by m-1, or if it is smaller than given element and smaller than the fr value means, it will update the flr to current value and increament the lower index by 1 or if it is greater than current flr vlue means, we increament the higher index value by 1, else we will just return from the function */ 
void floor(vector<int> &v,int l,int r,int *flr,int k)
{
    while(l<=r)
    {
        int m=(l+r)/2;
        if(v[m]==k)
        {
            *flr=v[m];
            return;
        }
        else if(v[m]>k)
        r=m-1;
        else if(v[m]<k && *flr<=v[m])
        {
            *flr=v[m];
            l+=1;
        }
        else if(v[m]<k && *flr>v[m])
        r+=1;
        else
        return;
    }
    
}
int main()
{
    vector<int> v={1, 2, 8, 10, 10, 12, 19};
    int cel=INT_MAX,flr=INT_MIN;
    ceil(v,0,v.size()-1,&cel,1);  //calling the ceiling function
    floor(v,0,v.size()-1,&flr,1); // calling the flooring function 
    if(cel==INT_MAX)              // checking the cel value, if it is equal to INT_MAX means, ceil doesn`t exist
    cout<<"\n ceil doesn`t exist"<<endl;
    else
    cout<<"\n the ceil is: "<<cel<<endl;
    if(flr==INT_MIN)              // checking the flr value, if it is equal to INT_MIN means, floor doesn`t exist 
    cout<<"\n floor doesn`t exist"<<endl;
    else
    cout<<"\n floor is: "<<flr<<endl;
    
    return 0;
}
