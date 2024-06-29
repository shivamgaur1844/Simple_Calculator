#include <iostream>

using namespace std;

int main() {
    char operation;
    double num1, num2, result;
    bool terminate = false;

    cout << "Simple Calculator" << endl;
    cout << "-----------------" << endl;

    while (!terminate) {
    
        cout << "Enter first number: ";
        cin >> num1;

        cout << "Enter second number: ";
        cin >> num2;

        cout << "Choose an operation: + (addition), - (subtraction), * (multiplication), / (division)" << endl;
        cout << "Enter the operator (or 'q' to quit): ";
        cin >> operation;

        switch (operation) {
            case '+':
                result = num1 + num2;
                cout << "Result: " << num1 << " + " << num2 << " = " << result << endl;
                break;
            case '-':
                result = num1 - num2;
                cout << "Result: " << num1 << " - " << num2 << " = " << result << endl;
                break;
            case '*':
                result = num1 * num2;
                cout << "Result: " << num1 << " * " << num2 << " = " << result << endl;
                break;
            case '/':
                if (num2 != 0) {
                    result = num1 / num2;
                    cout << "Result: " << num1 << " / " << num2 << " = " << result << endl;
                } else {
                    cout << "Error! Division by zero is not allowed." << endl;
                }
                break;
            case 'q':
                terminate = true;
                cout << "Exiting calculator..." << endl;
                break;
            default:
                cout << "Error! Invalid operation. Please try again." << endl;
                break;
        }

        cout << endl;
    }

    cout << "Goodbye!" << endl;

    return 0;
}
