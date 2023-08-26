//Task no.2 - Simple calculator

#include <iostream>

using namespace std;

int main() 
{
    double num1, num2;
    char operation;
    cout<<"SIMPLE CALCULATOR"<<endl << "------------------ \n";

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Choose an operation to perform(+, -, *, /): ";
    cin >> operation;

    double result;

    switch (operation)
     {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } 
            else 
            {
                cout << "Error: Division by zero is not Possible." << endl;
                return 1; // Exit program with an error status
            }
            break;
        default:
            cout << "Error: Invalid operation." << endl;
            return 1; // Exit program with an error status
    }

    cout << "Result: " << result << endl;

    return 0;
}
