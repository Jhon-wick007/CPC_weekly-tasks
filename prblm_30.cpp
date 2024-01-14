#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v={3, 5, 4, 1, 9};
    int max=*max_element(v.begin(),v.end());
    int min=*min_element(v.begin(),v.end());
    cout<<"\n the maximum element is:"<<max;
    cout<<"\n the minimum element is:"<<min;
    return 0;
}
