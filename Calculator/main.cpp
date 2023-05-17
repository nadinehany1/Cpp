#include <iostream>
#include <string>

int main()
{
    char op;
    int x, y;

    std::cout << "Please choose an operation: \n";
    std::cout << "- Summation              (+)\n";
    std::cout << "- Subtraction            (-)\n";
    std::cout << "- Multiplication         (*)\n";
    std::cout << "- Division               (/)\n";
    std::cout << "- Division with remainder(%): ";
    std::cin >> op;

    std::cout << "Please Enter the first number: ";
    std::cin >> x ;
    std::cout << "Please Enter the first number: ";
    std::cin >> y;

    switch(op)
    {

        case '+':
                std::cout << x << " + " << y << " = " << x + y;
                break;
        case '-':
                std::cout << x << " - " << y << " = " << x - y;
                break;
        case '*':
                std::cout << x << " * " << y << " = " << x * y;
                break;
        case '/':
                std::cout << x << " / " << y << " = " << x / y;
                break;
        case '%':
                std::cout << x << " % " << y << " = " << x % y;
                break;
        default:
                break;
    }

        return 0;
}
