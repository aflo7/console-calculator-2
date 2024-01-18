

#include <iostream>

class Calculator {
    public:
        std::string welcomeMessage = "Welcome to the calculator";

        void printTheWelcomeMessage() const {
            std::cout << welcomeMessage << std::endl;
        };

};

int main()
{
    Calculator theCalculator;
    theCalculator.printTheWelcomeMessage();
    
    int firstDigit;
    std::cout << "Enter the first digit: ";
    std::cin >> firstDigit;


    std::cout << "The digit you entered was " << firstDigit << std::endl;



}