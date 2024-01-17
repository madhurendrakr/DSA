#include "bits/stdc++.h"
using namespace std;

int sum(int a, int b)
{
    return a + b;
}

int factorial(int a)
{
    if (a == 0)
        return 1;
    return a * factorial(a - 1);
}
int main()
{
    int a;
    int b;
    cout << "Enter a and b: " << endl;
    cin >> a >> b;
    int c = a + b;

    cout << "sum of and b :" << c << endl;

    cout << sum(a, b) << endl;
    cout << factorial(a) << endl;

    return 0;
}