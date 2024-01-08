#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[20] = {1};

    for (int i = 0; i < 26; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    cout << "using Ranged for loop : " << endl;

    for (auto &a : arr)
        cout << a << " ";

    return 0;
}
