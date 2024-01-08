#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {1, 45, 2, 7, 89, 3, 9, 3, 5, 6, 12, 7, 34, 8, 19, 111, 0, 3};
    int size = arr.size();
    cout << " size of arr: " << size << endl;
    sort(arr.begin(), arr.end());

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            cout << "duplicate elemnt is:" << arr[i] << endl;
           cout<<endl; 
        }

        // else
        // {
        //     cout << "duplicate element not exist :" << endl;
        // }
    }

    return 0;
}