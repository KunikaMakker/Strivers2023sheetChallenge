/***
    URL: `https://www.codingninjas.com/codestudio/problems/search-in-a-2d-matrix_8230773?challengeSlug=striver-sde-challenge&leftPanelTab=1`
*/

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    //binary search in matrix
    int low = 0;
    if(!matrix.size()) return false;

    int high = (matrix.size() * matrix[0].size()) - 1;

    while(low <= high) {
        int mid = (low + (high - low) / 2);
        if(matrix[mid/matrix[0].size()][mid % matrix[0].size()] == target) return true;

        if(matrix[mid/matrix[0].size()][mid % matrix[0].size()] < target) low = mid+1;
        else high = mid - 1;
    }
    return false;
}