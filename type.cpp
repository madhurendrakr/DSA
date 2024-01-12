#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool halvesAreAlike(string s)
    {
        int n = s.size();
        int i = 0;
        int j = n - 1;
        int left = 0, right = 0;

        while (i < j)
        {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
            {
                left++;
            }

            if (s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u' || s[j] == 'A' || s[j] == 'E' || s[j] == 'I' || s[j] == 'O' || s[j] == 'U')
            {
                right++;
            }

            i++;
            j--;
        }

        if (left == right)
        {
            return true;

            return false;
        }
    }
};

int main()
{

    for (int i = 1; i <= 10; i++)
    {
        cout << i << endl;
    }

    return 0;
}
