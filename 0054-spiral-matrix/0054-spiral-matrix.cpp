class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> res;
        int l = 0, r = matrix[0].size() - 1;
        int u = 0, d = matrix.size() - 1;
        while (l <= r && u <= d) {
            for (int i = l; i <= r; i++)
                res.push_back(matrix[u][i]);
            for (int i = u + 1; i < d; i++)
                res.push_back(matrix[i][r]);
            for (int i = r; i >= l; i--)
                res.push_back(matrix[d][i]);
            for (int i = d - 1; i > u; i--)
                res.push_back(matrix[i][l]);
            --r;
            --d;
            ++l;
            ++u;
        }
        while (res.size() != matrix[0].size() * matrix.size())
            res.pop_back();
        return res;
    }
};