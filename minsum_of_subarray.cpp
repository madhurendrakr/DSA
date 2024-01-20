class Solution
{
public:
    int sumSubarrayMins(vector<int> &arr)
    {
        int sz = arr.size();
        stack<int> st;
        int mod = 1e9 + 7;
        long long num = 0;

        for (int i = 0; i <= sz; i++)
        {
            while (st.size() and (i == sz or arr[st.top()] > arr[i]))
            {
                int j = st.top();
                st.pop();
                int k = st.empty() ? -1 : st.top();
                num += (long long)arr[j] * (i - j) * (j - k);
            }
            st.push(i);
        }

        int res = (int)(num % mod);
        return res;
    }
};