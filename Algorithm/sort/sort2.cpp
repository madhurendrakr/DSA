#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[11] = {2, 8, 0, 1, 34, 3, 90, 23, 2, 6, 4};

    for (int i = 0; i < 11; i++)
    {
        cout << arr[i] <<" ";
    }

// sort(arr,arr+11 );
//     cout << endl
//          << " After sorting : " << endl;
//     for (int i = 0; i < 11; i++)
//     {
//         cout << arr[i] <<" ";
//     }

// sort(arr,arr+11 ,greater<int>());
//     cout << endl
//          << " After Decending sorting : " << endl;
//     for (int i = 0; i < 11; i++)
//     {
//         cout << arr[i] <<" ";
//     }

sort(arr,arr+5 );
    cout << endl
         << "sorting in range: " << endl;
    for (int i = 0; i < 11; i++)
    {
        cout << arr[i] <<" ";
    }
    return 0;
}