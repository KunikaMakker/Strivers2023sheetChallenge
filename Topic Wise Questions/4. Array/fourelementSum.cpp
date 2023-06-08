/***
    URL: https://www.codingninjas.com/codestudio/problems/find-four-elements-that-sums-to-a-given-value_8230785?challengeSlug=striver-sde-challenge&leftPanelTab=0
*/
#include <bits/stdc++.h>

string fourSum(vector<int> arr, int target, int n) {
    sort(arr.begin(), arr.end());

    for (int i = 0; i < n; i++) {
        //skip duplicates
        if (i > 0 && arr[i] == arr[i - 1]) continue;
        for (int j = i + 1; j < n; j++) {
            //skip duplicates
            if (j > i + 1 && arr[j] == arr[j - 1]) continue;

            int k = j + 1;
            int l = n - 1;
            while (k < l) {
                long long sum = arr[i] + arr[j] + arr[k] + arr[l];
                if (sum == target) {
                    return "Yes";
                }
                else if (sum < target) k++;
                else l--;
            }
        }
    }

    return "No";
}
