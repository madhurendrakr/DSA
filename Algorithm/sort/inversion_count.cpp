#include <bits/stdc++.h>
using namespace std;

int main()
{
    int cnt = 0;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int n = sizeof(arr) / sizeof(arr[0]);

sort(arr,arr+n,greater<int>());
    cout << "size :" << n << endl;
sort(arr,arr+n);
sort(arr,arr+n,greater<int>());
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
            cnt++;
        
    }

    cout << " count value: " << cnt << endl;
    return 0;
}