#include "functions.h"

// Function to calculate sum of squares from 1 to n using recursion
int sumOfSquares(int n) 
{
    // Base case: when n is 1, return 1^2 = 1
    if(n == 1){
        return 1;
    }
    else
        // Recursive case: n^2 + sum of squares of (n-1)
        return n*n + sumOfSquares(n-1);
}

// Function to calculate factorial of a number using recursion
int findFactorial(int n)
{
    // Base case: factorial of 0 or 1 is 1
    if(n <= 1){
        return 1;
    }
    else{
        // Recursive case: n * factorial of (n-1)
        return n * findFactorial(n-1);
    }
}