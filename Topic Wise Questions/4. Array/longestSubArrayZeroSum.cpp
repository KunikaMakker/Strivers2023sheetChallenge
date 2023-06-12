/**
    URL: https://www.codingninjas.com/codestudio/problems/longest-subarray-zero-sum_8230747?challengeSlug=striver-sde-challenge&leftPanelTab=0
*/
#include <bits/stdc++.h>

int LongestSubsetWithZeroSum(vector < int > arr) {
    unordered_map<int, int> mp;
    int maximum = 0, sum = 0;
    for(int i = 0; i < arr.size(); i++) {
        sum+= arr[i];
        if(sum == 0) {
            maximum = i+1;
        }
        else {
            if(mp.find(sum) != mp.end()) {
                maximum = max(maximum, i-mp[sum]);
            }
            else {
                mp[sum] = i;
            }
        }
    }
    return maximum;
}