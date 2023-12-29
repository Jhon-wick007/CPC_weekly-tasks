#include <iostream>
#include<bits/stdc++.h>

using namespace std;

// To heapify a subtree rooted with node i
// which is an index in vector v
// n is size of heap
void heapify(vector<int> &v, int n, int i)
{

	// Initialize largest as root
	int largest = i;

	// left child
	int l = 2 * i + 1;

	// right child
	int r = 2 * i + 2;

	// If left child is larger than root
	if (l < n && v[l] > v[largest])
		largest = l;

	// If right child is larger than largest
	// so far
	if (r < n && v[r] > v[largest])
		largest = r;

	// If largest is not root
	if (largest != i) {
		swap(v[i], v[largest]);

		// Recursively heapify the affected
		// sub-tree
		heapify(v, n, largest);
	}
}

void heapSort(vector<int> &v)
{

	// this one is used to build the heap tree
	for (int i = v.size() / 2 - 1; i >= 0; i--)
		heapify(v, v.size(), i);

	// One by one extract an element
	// from heap
	for (int i = v.size() - 1; i > 0; i--) {

		// Move current root to end
		swap(v[0], v[i]);

		// call max heapify on the reduced heap
		heapify(v, i, 0);
	}
}

int main()
{
	vector<int> v= { 12, 11, 13, 5, 6, 7 };

	heapSort(v);

	cout<<"\n the sorted vector is:"<<endl;
	for(int i=0;i<v.size();i++)
	{
	    cout<<v[i]<<"\t";
	}
	return 0;
}
