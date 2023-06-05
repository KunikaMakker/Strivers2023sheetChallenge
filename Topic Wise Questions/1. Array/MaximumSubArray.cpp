/***
* URL: `https://www.codingninjas.com/codestudio/problems/maximum-subarray-sum_8230694?challengeSlug=striver-sde-challenge`
*/

#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    int maxSum = 0, prev = -1, maximum=0;
    for(int i = 0; i < n; i++) {
        if( prev >= 0 ) {
            maxSum += arr[i];
            prev = maxSum;
        }
        else {
            maxSum = arr[i];
            prev = arr[i];
        }
        if(maxSum > maximum) {
            maximum = maxSum;
        }
    }
    return maximum;
}