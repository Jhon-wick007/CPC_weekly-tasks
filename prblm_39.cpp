#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v={15, 2, 4, 8, 9, 5, 10, 23};
    int st=0,end=0,sum=v[0];int given=21;
    for(int i=1;i<v.size();i++)
    {
        sum+=v[i];
        if(sum==given)
        {
            end=i;
            break;
        }
        else if(sum>given)
        {
            sum=sum-v[st];
            st++;
        }
    }
    cout<<"\n the sum found between indices:"<<st<<" "<<end<<endl;
    return 0;
}
