#include <iostream>

int main()
{
    double num1;
    double num2;
    int choice;

    std::cout << "====================================" << std::endl;
    std::cout << "       C++ Console Calculator" << std::endl;
    std::cout << "====================================" << std::endl;

    std::cout << "1. Add" << std::endl;
    std::cout << "2. Subtract" << std::endl;
    std::cout << "3. Multiply" << std::endl;
    std::cout << "4. Divide" << std::endl;
    std::cout << "5. Exit" << std::endl;

    std::cout << "Please choose an option: ";
    std::cin >> choice;

    if (choice == 5)
    {
        std::cout << "Thank you for using the calculator." << std::endl;
        return 0;
    }

    std::cout << "Enter first number: ";
    std::cin >> num1;

    std::cout << "Enter second number: ";
    std::cin >> num2;

    if (choice == 1)
    {
        std::cout << "Result: " << num1 + num2 << std::endl;
    }
    else if (choice == 2)
    {
        std::cout << "Result: " << num1 - num2 << std::endl;
    }
    else if (choice == 3)
    {
        std::cout << "Result: " << num1 * num2 << std::endl;
    }
    else if (choice == 4)
    {
        if (num2 == 0)
        {
            std::cout << "Error: Division by zero is not allowed." << std::endl;
        }
        else
        {
            std::cout << "Result: " << num1 / num2 << std::endl;
        }
    }
    else
    {
        std::cout << "Invalid option." << std::endl;
    }

    return 0;
}
