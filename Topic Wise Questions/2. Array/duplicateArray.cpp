/***
    URL: `https://www.codingninjas.com/codestudio/problems/find-duplicate-in-array_8230816?challengeSlug=striver-sde-challenge&leftPanelTab=0`
*/

#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n){
	// update the value of cur ele indexed value as negative
	int ele;
	for(int i = 0; i < n; i++) {
		int ele = arr[i] < 0 ? -arr[i] : arr[i]; // mod
		if(arr[ele] < 0) {
			return ele;
		}
		else {
			arr[ele] = -arr[ele];
		}
	} 
}
