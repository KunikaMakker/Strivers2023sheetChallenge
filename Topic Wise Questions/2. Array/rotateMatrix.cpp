/**
* URL: `https://www.codingninjas.com/codestudio/problems/rotate-matrix_8230774?challengeSlug=striver-sde-challenge&leftPanelTab=0`
**/

#include <bits/stdc++.h>

void rotateMatrix(vector<vector<int>> &mat, int n, int m)
{
    //rotation by one element cannot be done directly
    //rotate first row, then last col, then last row, then first col and change the borders acc
    int row = 0, col = 0, prev, cur;

    while(row < n && col < m) {
        if(row + 1 == n || col + 1 == m) break;

        prev = mat[row+1][col];
        //move ele in first row
        for(int j = col; j < m; j++) {
            cur = mat[row][j];
            mat[row][j] = prev;
            prev = cur;
        }
        row++;

        //move ele in last col
        for(int i = row; i < n; i++) {
            cur = mat[i][m-1];
            mat[i][m-1] = prev;
            prev = cur;
        }
        m--;

        //move ele of last row
        if(row < n) {
            for(int j = m-1; j >= col; j--) {
                cur = mat[n-1][j];
                mat[n-1][j] = prev;
                prev = cur;
            }
        }
        n--;

        //move ele of first col
        if(col < m) {
            for(int i = n-1; i >= row; i--) {
                cur = mat[i][col];
                mat[i][col] = prev;
                prev = cur;
            }
        }
        col++;
    } 
}