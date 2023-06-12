/***
    URL: `https://www.codingninjas.com/codestudio/problems/count-subarrays-with-given-xor_8230830?challengeSlug=striver-sde-challenge&leftPanelTab=0`
*/

#include <bits/stdc++.h>

int subarraysXor(vector<int> &arr, int x)
{
    int n = arr.size();
    int xxor = 0;
    map<int, int> mp;
    mp[xxor]++;
    int count = 0;

    for(int i = 0; i < n; i++) {
        xxor = xxor ^ arr[i];
        int j = xxor ^ x;
        count += mp[j];
        mp[xxor]++;
    }
    return count;
}