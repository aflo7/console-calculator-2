

#include <iostream>

class Calculator {
    public:
        std::string welcomeMessage = "Welcome to the calculator";

        void printTheWelcomeMessage() const {
            std::cout << welcomeMessage << std::endl;
        };

        double calculate(double firstDigit, char operation, double secondDigit) {
            switch (operation)
            {

            case '+':
                return firstDigit + secondDigit;
                break;
            case '-':
                return firstDigit - secondDigit;
                break;
            case '/':
                return firstDigit / secondDigit;
                break;
            case '*':
                return firstDigit * secondDigit;
                break;
            default:
                break;
            }
        }

        void prettyPrint(double result) {
            std::cout << "The result is " << result << "." << std::endl;
        }

};

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