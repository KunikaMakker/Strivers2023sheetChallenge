/***
* URL: `https://www.codingninjas.com/codestudio/problems/pascal-s-triangle_8230805?challengeSlug=striver-sde-challenge&leftPanelTab=3`
*/

//One boundary case is failing in coding ninjas but works on leetcode
#include <bits/stdc++.h>

vector<vector<long long int>> printPascal(int n) 
{
  vector<vector<long long int>> result;

  //Base case
  if(n == 0) return result;

  for(int i = 0; i < n; i++) {
    vector<long long int> current = {};
    for(int j = 0; j <= i; j++) {
      if(i == 0 && j == 0) {
        //for first row
        current.push_back(1);                
      }
      else {
        if(j == 0 || j == i) {
          //for first and last element of each row
          current.push_back(1);
        }
        else {
          int value = result[i-1][j] + result[i-1][j-1];
          current.push_back(value);
        }
      }
    }
    result.push_back(current);
  }
  return result;
}
