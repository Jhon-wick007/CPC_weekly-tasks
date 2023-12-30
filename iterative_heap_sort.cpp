#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int min(int x, int y)   //to find minimum of two integers
{ 
    return (x<y)? x :y; 
}


/* Function to merge the two haves arr[l..m] and arr[m+1..r] of array arr[] */
void merge1(vector<int> &v, int l, int m, int r)
{
	int i, j, k;
	int n1 = m - l + 1;
	int n2 = r - m;

	/* create temp arrays */
	vector<int> v1(n1),v2(n2);

	/* Copy data to temp arrays L[] and R[] */
	for (i = 0; i < n1; i++)
		v1[i] = v[l + i];
	for (j = 0; j < n2; j++)
		v2[j] = v[m + 1+ j];

	/* Merge the temp arrays back into arr[l..r]*/
	i = 0;
	j = 0;
	k = l;
	while (i < n1 && j < n2)
	{
		if (v1[i] <= v2[j])
		{
			v[k] = v1[i];
			i++;
		}
		else
		{
			v[k] = v2[j];
			j++;
		}
		k++;
	}
	while (i < n1)
	{
		v[k] = v1[i];
		i++;
		k++;
	}

	while (j < n2)
	{
		v[k] = v2[j];
		j++;
		k++;
	}
}

void Sort(vector<int> &v, int n)
{
int current;    // For current size of subaarray
int left;       // For picking starting index of left subarray

/* Merge subarrays in bottom up manner. First merge subarrays of
   size 1 to create sorted subarrays of size 2, then merge subarrays
  of size 2 to create sorted subarrays of size 4, and so on. */ 
 
for (current=1; current<=n-1; current = 2*current)
{
	for (left=0; left<n-1; left += 2*current)
	{
		int mid = min(left + current - 1, n-1);

		int right = min(left + 2*current - 1, n-1);

		merge1(v, left, mid, right);
	}
}
}

int main()
{
	vector<int> v = {12, 11, 13, 5, 6, 7}; //declaring and intialising the input vector
	
	Sort(v, v.size());

	cout <<"\nSorted array is \n ";
	for(int i=0;i<v.size();i++)
	{
	    cout<<v[i]<<"\t";
	}
	
	return 0;
}
// This code is contributed shivanisinghss2110
