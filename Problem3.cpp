#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter value of a: ";
    cin >> a;

    // If 'a' is even, reduce it by 1 to get last odd number
    int lastOdd = (a % 2 == 0) ? a - 1 : a;

    // Print odd numbers: 1, 3, 5, ... until lastOdd
    for (int i = 1; i <= lastOdd; i += 2) {
        cout << i;

        // print comma except after last value
        if (i < lastOdd) {
            cout << ", ";
        }
    }

    return 0;
}
