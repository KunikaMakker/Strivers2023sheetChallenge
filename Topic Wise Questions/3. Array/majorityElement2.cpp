/**
    URL: https://www.codingninjas.com/codestudio/problems/majority-element-ii_8230738?challengeSlug=striver-sde-challenge&leftPanelTab=0
*/

#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &arr)
{
    map<int, int> freq;
    int checkVal = (int)(arr.size() / 3) + 1;
    vector<int> res;
    for(int i = 0; i < arr.size(); i++) {
        freq[arr[i]]++;
        if(freq[arr[i]] == checkVal) {
            res.push_back(arr[i]);
        }
    }
    return res;
}