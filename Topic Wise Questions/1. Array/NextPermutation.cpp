/***
* URL: `https://www.codingninjas.com/codestudio/problems/next-permutation_8230741?challengeSlug=striver-sde-challenge&leftPanelTab=1`
*/
#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &permutation, int n)
{
    int k, l;
    for(k = n-2; k >=0; k--) {
        // get largest index k where cur element < next element
        if(permutation[k] < permutation[k+1]) {
            break;
        }
    }
    if(k < 0) {
        // reverse the vector
        reverse(permutation.begin(), permutation.end());
    }
    else {
        for(l = n-1; l > k; l--) {
            if(permutation[l] > permutation[k]) 
            {
                break;
            }
        }
        swap(permutation[k], permutation[l]);
        reverse(permutation.begin()+k+1,permutation.end());
    }
    return permutation;
}