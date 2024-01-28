class Solution
{
public:
    int numSubmatrixSumTarget(vector<vector<int>> &matrix, int target)
    {
        int ans = 0;
        int m = matrix.size(), n = matrix[0].size();
        for (int i = 0; i < m; i++)
            for (int j = 1; j < n; j++)
                matrix[i][j] += matrix[i][j - 1];

        unordered_map<int, int> track;
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                track = {{0, 1}};
                int cur = 0;
                for (int k = 0; k < m; k++)
                {
                    cur += matrix[k][j] - (i > 0 ? matrix[k][i - 1] : 0);
                    ans += track.find(cur - target) != track.end() ? track[cur - target] : 0;
                    track[cur]++;
                }
            }
        }
        return ans;
    }
};
