class Solution
{
public:
    int minFallingPathSum(vector<vector<int>> &matrix)
    {
        int sz = matrix.size();

        vector<int> temp1(sz, 0), temp2(sz, 0);
        for (int r = 0; r < sz; r++)
        {
            for (int c = 0; c < sz; c++)
            {
                int left = ((c - 1) >= 0) ? temp1[c - 1] : INT_MAX;
                int middle = temp1[c];
                int right = ((c + 1) < sz) ? temp1[c + 1] : INT_MAX;
                temp2[c] = matrix[r][c] + min({left, middle, right});
            }
            swap(temp1, temp2);
        }

        int ans = INT_MAX;
        for (auto &sum : temp1)
            ans = min(ans, sum);
        return ans;
    }
};