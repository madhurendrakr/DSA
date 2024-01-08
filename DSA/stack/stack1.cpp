#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;

    for (int i = 0; i < 10; i++)
    {
        st.push(i);
    }

    while (!st.empty())
    {
        cout << st.size() << " " << st.top() << " " << endl;
        st.pop();
    }
    cout << endl
         << endl;

    for (int i = 21; i < 30; i++)
    {
        st.emplace(i);
    }

    while (!st.empty())
    {
        cout << st.size() << " " << st.top() << " " << endl;
        st.pop();
    }

    return 0;
}