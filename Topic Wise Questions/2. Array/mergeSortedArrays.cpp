/**
    URL: `https://www.codingninjas.com/codestudio/problems/merge-two-sorted-arrays_8230835?challengeSlug=striver-sde-challenge`
*/

#include <bits/stdc++.h>

vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	for(int i = m; i < m+n; i++) {
		arr1[i] = arr2[i-m];
	}
	sort(arr1.begin(), arr1.end());
	return arr1;
}