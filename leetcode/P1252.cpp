// 1252. Cells with Odd Values in a Matrix
// https://leetcode.com/problems/cells-with-odd-values-in-a-matrix/
class Solution {
public:
    int oddCells(int n, int m, vector<vector<int>>& indices) {
        int arr[n][m];
        for (int i=0; i<n; i++)
            for (int j=0; j<m; j++)
                arr[i][j] = 0;

        for (int i=0; i<indices.size(); i++) {
            for (int r=0; r<m; r++) {
                arr[indices[i][0]][r] += 1;
            }
            for (int c=0; c<n; c++) {
                arr[c][indices[i][1]] += 1;
            }
        }

        int odd = 0;
        for (int i=0; i<n; i++) {
            for (int j=0; j<m; j++) {
                if (arr[i][j]%2 != 0)
                    odd++;
            }
        }
        return odd;
    }
};