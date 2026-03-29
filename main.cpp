#include "functions.h"
using namespace std;

int main() {
    int n;

    // Ask user to enter a number for sum of squares
    cout << "Enter a number: ";
    cin >> n;

    // Call sumOfSquares function and display result
    cout << "Sum of squares: " << sumOfSquares(n) << endl;

    // Ask user to enter a number again for factorial calculation
    cout << "enter a number again for factorial: ";
    cin >> n;

    // Call findFactorial function and display result
    cout << "Factorial of the number is " << findFactorial(n);

    // Indicate successful program execution
    return 0;
}