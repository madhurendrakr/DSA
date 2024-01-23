class Solution
{
public:
    int dfs(int i, vector<string> &arr, vector<int> vec)
    {
        if (i == arr.size())
            return 0;
        int skip = dfs(i + 1, arr, vec);
        for (char c : arr[i])
        {
            if (vec[c - 'a'])
                return skip;
            vec[c - 'a'] = 1;
        }
        int temp = arr[i].length() + dfs(i + 1, arr, vec);
        return max(skip, temp);
    }

    int maxLength(vector<string> &arr)
    {
        vector<int> vec(26, 0);
        return dfs(0, arr, vec);
    }
};