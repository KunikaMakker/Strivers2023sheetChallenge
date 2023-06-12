/***
    URL: `https://www.codingninjas.com/codestudio/problems/630418?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=0`
*/

#include <bits/stdc++.h> 
int uniqueSubstrings(string input)
{
    int i=0,j=0;
    unordered_map<char,int>mp;
    int n = input.size();
    int max_size=0;
        
    while(j<n){
        mp[input[j]]++;
        if(mp.size() > j-i+1){
            j++;
        }
            
        else if(mp.size() == j-i+1){
            max_size = max(max_size,j-i+1);
            j++;
        }
            
        else if(mp.size() < j-i+1)  {
            while(mp.size() < j-i+1){
                mp[input[i]]--;
                if(mp[input[i]]==0){
                    mp.erase(input[i]);
                }
                i++;
            }
            j++;
          }
            
        }
        return max_size;
}