

// Recursion
#include <bits/stdc++.h> 

int getCount(int i, int j, int m, int n) {
	//Base Case i.e. it reached at bottom left
	if(i == n-1 && j == m-1) return 1;
	//Reached out of boundary
	if(i >= n || j >= m) return 0;
	//resurcive call with i+1, j+1
	return getCount(i+1, j, m, n) + getCount(i, j+1, m, n);
}

int uniquePaths(int m, int n) {
	return getCount(0, 0, m, n);
}

//DP
int countPaths(int i,int j,int n,int m,vector<vector<int>> &dp)
{
    //Base Case i.e. it reached at bottom left
	if(i == n-1 && j == m-1) return 1;
	//Reached out of boundary
	if(i >= n || j >= m) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    else return dp[i][j]=countPaths(i+1,j,n,m,dp)+countPaths(i,j+1,n,m,dp);
    
}
int uniquePaths(int m, int n) {
    vector<vector<int>> dp(m+1,vector<int>(n+1,-1));
    
    //dp[1][1]=1;
    int num=countPaths(0,0,m,n,dp);
    if(m==1&&n==1)
        return num;
    return dp[0][0];
}