// 832. Flipping an Image
// https://leetcode.com/problems/flipping-an-image/
class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        vector<vector<int>> v(A.size(), vector<int>(A.size(), 0));
        for (int i=0; i<A.size(); i++) {
            int index = 0;
            for (int j=A[i].size()-1; j>=0; j--) {
                v[i][index++] = abs(A[i][j] - 1);
            }
        }
        return v;
    }
};