/****
    URL: `https://www.codingninjas.com/codestudio/problems/count-inversions_8230680?challengeSlug=striver-sde-challenge&leftPanelTab=0`
*/

#include <bits/stdc++.h> 
long long getInversions(long long *arr, int n){
    // all smaller ele than curr will create a inv pair
    int invCount = 0;
    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            if(arr[i] > arr[j]) invCount++;
        }
    }    
    return invCount;
}