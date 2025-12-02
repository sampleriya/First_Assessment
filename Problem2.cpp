#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter a number: ";
    cin >> a;

    // Generate 'a' odd numbers: 1, 3, 5, ...
    for (int i = 0; i < a; i++) {
        int value = 2 * i + 1;   // formula for ith odd number
        cout << value;

        // print comma except after last number
        if (i < a - 1) {
            cout << ", ";
        }
    }

    return 0;
}
