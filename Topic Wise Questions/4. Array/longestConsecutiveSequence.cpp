/****
    URL: https://www.codingninjas.com/codestudio/problems/longest-consecutive-sequence_8230708?challengeSlug=striver-sde-challenge&leftPanelTab=0
*/

#include <bits/stdc++.h>

int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    sort(arr.begin(), arr.end());
    int count = 1, maxCount = 1;
    for(int i = 1; i < n; i++) {
        if(arr[i] == arr[i-1]+1) {
            count++;
        }
        else if(arr[i] != arr[i-1]){
            count = 1;
        }
        if(maxCount < count) {
            maxCount = count;
        }
    }
    return maxCount;
}