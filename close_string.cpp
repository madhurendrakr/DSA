class Solution
{
public:
    bool closeStrings(string word1, string word2)
    {
        if (word1.size() != word2.size())
            return false;

        vector<int> freq1(26, 0), freq2(26, 0);
        vector<int> count1(26, 0), count2(26, 0);
        for (char c : word1)
        {
            freq1[c - 'a']++;
            count1[c - 'a'] = 1;
        }
        for (char c : word2)
        {
            freq2[c - 'a']++;
            count2[c - 'a'] = 1;
        }
        sort(freq2.begin(), freq2.end());
        sort(freq1.begin(), freq1.end());
        if (freq1 == freq2 && count1 == count2)
            return true;

        else
        {
            return false;
        }
    }
};