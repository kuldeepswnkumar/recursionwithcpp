#include <iostream>

// Recursive function to calculate the factorial of a number
int factorial(int n) {
    // Base case: factorial of 0 is 1
    if (n == 0) {
        return 1;
    }

    // Recursive case: factorial of n is n multiplied by factorial of (n-1)
    return n * factorial(n - 1);
}

// Main function
int main() {
    int num;

    std::cout << "Enter a positive integer: ";
    std::cin >> num;

    // Call the factorial function
    int result = factorial(num);

    std::cout << "The factorial of " << num << " is: " << result << std::endl;

    return 0;
}
