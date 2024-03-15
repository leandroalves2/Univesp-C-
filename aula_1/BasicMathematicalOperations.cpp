#include <iostream>

int main() {
    int number1;
    int number2;

    std::cout << "Enter the first number: ";
    std::cin >> number1;
    std::cout << "Enter the second number: ";
    std::cin >> number2;
    
    int sum = number1 + number2;
    std::cout << "The sum is: " << sum << std::endl;

    int sub = number1 - number2;
    std::cout << "The sub is: " << sub << std::endl;

    int mul = number1 * number2;
    std::cout << "The mult is: " << mul << std::endl;

    int div = number1 / number2;
    std::cout << "The div is: " << div << std::endl;

    return 0;
}