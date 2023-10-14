#include <iostream>

using namespace std;  // Simplify usage of standard library functions and objects

class Solution {
public:
    double ans = 1.0;

    // Recursive function to calculate x raised to the power of n
    double myPow(double x, int n) {
        if (x == 0) {
            return 0;
        }

        if (n == 0) {
            return 1;
        }

        if (n < 0) {
            n = abs(n);
            x = 1 / x;
        }

        if (n % 2 == 0) {
            return myPow(x * x, n / 2);
        }

        return x * myPow(x, n - 1);
    }
};

int main() {
    Solution solution;  // Create an instance of the Solution class

    double x;  // Base value
    int n;     // Exponent value

    // Input values from the user
    cout << "Enter the base (x): ";
    cin >> x;
    cout << "Enter the exponent (n): ";
    cin >> n;

    // Calculate the result using myPow function
    double result = solution.myPow(x, n);

    // Display the result
    cout << "Result: " << result << endl;

    return 0;
}
