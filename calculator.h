#pragma once
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

