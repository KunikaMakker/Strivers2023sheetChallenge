/***
* URL: `https://www.codingninjas.com/codestudio/problems/893405?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=0`
*/

#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    int minP = INT_MAX;
    int maxReturn = INT_MIN;
    for(int i = 0; i < prices.size(); i++) {
        if(minP > prices[i]) {
            minP = prices[i]; 
        }
        int diff = prices[i]-minP;
        if(diff > maxReturn) {
            maxReturn = diff;
        }
    }
    return maxReturn;
}