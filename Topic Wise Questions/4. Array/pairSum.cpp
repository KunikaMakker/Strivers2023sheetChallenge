/**
    URL: https://www.codingninjas.com/codestudio/problems/pair-sum_8230699?challengeSlug=striver-sde-challenge
*/
vector<vector<int>> pairSum(vector<int> &arr, int s){
    sort(arr.begin(),arr.end());
    int left = 0;
    int right = arr.size()-1;
    vector<vector<int>> ans;
    while(left < arr.size()){
        if(right == left){
            right = arr.size()-1;
            left++;
            }
        if(arr[left]+arr[right]==s){
            vector<int> temp;
            temp.push_back(arr[left]);
            temp.push_back(arr[right]);
            ans.push_back(temp);
            if(right == left){
            right = arr.size()-1;
            left++;
            }
            right--;
        }
        else{
            if(right == left){
            right = arr.size()-1;
            left++;
            }
            else{
            right--;
            }   
        }
    }
    return ans;
}