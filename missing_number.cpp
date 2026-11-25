#include <iostream>

using namespace std;

int main() {
    long long n;
    cin >> n;

    long long formula = n * (n + 1) / 2;
    long long given_sum = 0;

    // Removed the semicolon and added curly braces
    for (int i = 0; i < n - 1; i++) {
        long long y;
        cin >> y;
        given_sum += y; // Add each number directly to the running total
    }

    // The missing number is the difference
    cout << formula - given_sum << endl;

    return 0;
}

