/***
* URL: `https://www.codingninjas.com/codestudio/problems/sort-0-1-2_8230695?challengeSlug=striver-sde-challenge&leftPanelTab=1`
*/

#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   int low = 0, mid = 0, high = n-1;
   //low for 0s, mid for 1s and high for 2s
   int temp;
   while(mid <= high) {
      if(arr[mid] == 0) {
         //mid is 0 means low and mid should swap and should move to next
         temp = arr[mid];
         arr[mid] = arr[low];
         arr[low] = temp;

         low++;
         mid++;
      }
      else if(arr[mid] == 1) {
         //inc mid
         mid++;
      }
      else {
         //mid is 2 swap mid and high and dec high
         temp = arr[mid];
         arr[mid] = arr[high];
         arr[high] = temp;
         high--;
      }
   }
}