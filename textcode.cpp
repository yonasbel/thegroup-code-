#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
#include <iostream>

int main() {
    // Declare variables to hold the numbers
    double num1, num2, product;

    // Prompt the user for input
    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    // Calculate the product
    product = num1 * num2;

    // Display the result
    std::cout << "The product of " << num1 << " and " << num2 << " is " << product << "." << std::endl;

    return 0;
}