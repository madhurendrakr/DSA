// Online C++ compiler to run C++ program online
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Example 1: setw
    int number = 42;
    cout << "Example 1: setw\n";
        cout << "Width 1 ;" << setw(1) << number << "\n\n";
    cout << " Width 2 ;" << setw(2) << number << "\n\n";
      cout << " Width 3 ;" << setw(3) << number << "\n\n";
    cout << "Width 10 ;" << setw(10) << number << "\n\n";
    

    // Example 2: setfill
    char fillChar1 = '*';
    char fillChar2 = '$';
    cout << "Example 2: setfill\n";
    cout << setfill(fillChar1) << setw(10) << number << "\n\n";
    cout << setfill(fillChar2) << setw(7) << number << "\n\n";

    // Example 3: setprecision
    double pi = 3.14159265358979323846;
    cout << "Example 3: setprecision\n";
    cout << setprecision(4) << pi << "\n\n";
    cout << setprecision(7) << pi << "\n\n";

    // Example 4: setbase
    int decimalNumber = 42;
    cout << "Example 4: setbase\n";
    cout << "Decimal: " << decimalNumber << "\n";
    cout << "Hexadecimal: " << hex << decimalNumber << "\n";
    cout << "Octal: " << oct << decimalNumber << "\n";
    cout << "Back to Decimal: " << dec << decimalNumber << "\n";

    return 0;
}
