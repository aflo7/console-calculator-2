

#include <iostream>
#include "calculator.h"


int main()
{
    Calculator theCalculator;
    theCalculator.printTheWelcomeMessage();
    double firstDigit;
    double secondDigit;
    char operation;
    std::cout << "Enter the first digit: ";
    std::cin >> firstDigit;
    std::cout << "Enter the second digit: ";
    std::cin >> secondDigit;
    std::cout << "Enter the operation: ";
    std::cin >> operation;
    double result = theCalculator.calculate(firstDigit, operation, secondDigit);
    theCalculator.prettyPrint(result);
}