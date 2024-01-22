class Solution
{
public:
    vector<int> findErrorNums(vector<int> &nums)
    {
        unordered_set<int> mp;
        vector<int> ans;

        for (auto num : nums)
        {
            if (mp.count(num))
            {
                ans.push_back(num);
            }
            mp.insert(num);
        }
        for (int num = 1; num <= nums.size(); num++)
        {
            if (!mp.count(num))
                ans.push_back(num);
        }

        return ans;
    }
};