#include <bits/stdc++.h>
using namespace std;

bool isValid(string& str, string& pattern, int mid,
			int& start)
{
	int count[256] = { 0 };

	int distinct = 0;

	bool found = false;

	for (char c : pattern) {
		count++;
		if (count == 1)
			distinct++;
	}

	int curr_count = 0;
	for (int i = 0; i < str.size(); i++) {
		count[str[i]]--;
		if (count[str[i]] == 0) {
			curr_count++;
		}
		if (i >= mid) {
			count[str[i - mid]]++;
			if (count[str[i - mid]] == 1) {
				curr_count--;
			}
		}
		if (i >= mid - 1) {

			if (curr_count == distinct) {

				found = true;

				start = (i - mid) + 1;
				break;
			}
		}
	}

	return found;
}

string findSmallestSubstring(string& str, string& pattern)
{
	int len_str = str.length();
	int len_pattern = pattern.length();
	string smallestSubstring = "";

	int minLength = INT_MAX;

	int low_bound = 1, high_bound = len_str;

	int idx;

	while (low_bound <= high_bound) {
		int mid = (low_bound + high_bound) / 2;
		int start;

		if (isValid(str, pattern, mid, start)) {
			if (mid < minLength) {
				minLength = mid;
				idx = start;
			}
			high_bound = mid - 1;
		}
	
		else {
			low_bound = mid + 1;
		}
	}

	return smallestSubstring = str.substr(idx, minLength);
}

int main()
{
	string str1 = "this is a test string";
	string pattern1 = "tist";
	cout << "Input: string = \"" << str1
		<< "\", pattern = \"" << pattern1 << "\"" << endl;
	cout << "Output: \""
		<< findSmallestSubstring(str1, pattern1) << "\""
		<< endl;

	string str2 = "geeksforgeeks";
	string pattern2 = "ork";
	cout << "Input: string = \"" << str2
		<< "\", pattern = \"" << pattern2 << "\"" << endl;
	cout << "Output: \""
		<< findSmallestSubstring(str2, pattern2) << "\""
		<< endl;

	return 0;
}
