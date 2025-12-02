#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Input list
    vector<int> arr = {1,2,8,9,12,46,76,82,15,20,30};

    // Array to store count of multiples for 1 to 9
    int count[10] = {0};

    // Check for each divisor from 1 to 9
    for (int d = 1; d <= 9; d++) {
        for (int num : arr) {
            if (num % d == 0) {
                count[d]++;   // increment count if divisible
            }
        }
    }

    // Print output in required format
    cout << "{";
    for (int d = 1; d <= 9; d++) {
        cout << d << ": " << count[d];
        if (d < 9) cout << ", ";
    }
    cout << "}";

    return 0;
}
