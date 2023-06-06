/***
    URL: `https://www.codingninjas.com/codestudio/problems/day-6-majority-element_8230731?challengeSlug=striver-sde-challenge&leftPanelTab=0`
*/

#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	map<int, int> freq;

	for(int i = 0; i < n; i++) {
		freq[arr[i]]++;
	}

	for(auto itr: freq) {
		if(itr.second > (n / 2)) {
			return itr.first;
		}
	}

	return -1;
}