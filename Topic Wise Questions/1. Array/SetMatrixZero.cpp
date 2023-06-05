/***
*   URL: `https://www.codingninjas.com/codestudio/problems/set-matrix-zeros_8230862?challengeSlug=striver-sde-challenge`
*/

#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
	int m = matrix.size();
	int n = matrix[0].size();

	bool col = false;

	for(int i = 0; i < m; i++) {
		for(int j = 0; j < n; j++) {
			if(matrix[i][j] == 0) {
				//first element of current row
				matrix[i][0] = 0;

				if(j != 0) {
					//first element of current col
					matrix[0][j] = 0;
				}
				else {
					//first column
					col = true;
				}
			}
		}
	}

	for(int i = 1; i < m; i++) {
		for(int j = 1; j < n; j++) {
			if(matrix[i][j] != 0) {
				if(matrix[i][0] == 0 || matrix[0][j] == 0) {
					// if the first element of current row or column is 0 than current element will be 0
					matrix[i][j] = 0;
				}
			}
		}
	}

	if(matrix[0][0] == 0) {
		for(int j = 0; j < n; j++) {
			//all elements of first col
			matrix[0][j] = 0;
		}
	}

	if(col) {
		for(int i = 0; i < m; i++) {
			//all the elements of first row
			matrix[i][0] = 0;
		}
	}
}