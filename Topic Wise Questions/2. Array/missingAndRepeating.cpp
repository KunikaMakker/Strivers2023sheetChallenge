/***
    URL: `https://www.codingninjas.com/codestudio/problems/missing-and-repeating-numbers_8230733?challengeSlug=striver-sde-challenge&leftPanelTab=1`
*/

#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &a, int n)
{
    int hash[n + 1] = {0}; // hash array

    //update the hash array:
    for (int i = 0; i < n; i++) {
        hash[a[i]]++;
    }

    //Find the repeating and missing number:
    int repeating = -1, missing = -1;
    for (int i = 1; i <= n; i++) {
        if (hash[i] == 2) repeating = i;
        else if (hash[i] == 0) missing = i;

        if (repeating != -1 && missing != -1)
            break;
    }
    return {missing, repeating};
}












/*

//one edge case was failing in coding ninja
#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	//series sum 
	long long nSum = (n * (n+1))/2;
	long long sqSum = (n * (n+1) * (2*n+1)) / 6;
	//element sum
	long long eleSum = 0, eleSqSum = 0;

	for(int i = 0; i < n; i++) {
		eleSum += arr[i];
		eleSqSum += (long long)arr[i] * (long long)arr[i];
	}

	//eleSum - nSum
	long long val1 = eleSum - nSum;

	//eleSqSum - sqSum
	long long val2 = eleSqSum - sqSum;

	val2 = val2/val1;

	long long repeating = (val1 + val2) / 2;
	long long missing = repeating - val1;

	return {(int)missing, (int)repeating};
}

*/