/* Write a program that mimics a calculator. The program should take as input two integers and the
operation to be performed. It should then output the numbers, the operator, and the result. For
division, if the denominator is zero, output an appropriate message. Limit the supported operations to +
- / * and write an error message if the operator is not one of the supported operations. */


#include <iostream>
#include <cmath>
using namespace std;


int main() {

    double num1, num2, answer;
    char op;
    answer = 0;

    cout << "Enter the Equation: ";
    cin >> num1 >> op >> num2;

    switch (op)
    {
    case '+': answer = num1 + num2;
        cout << num1 << " " << op << " " << num2 << " = " << answer;
        break;
    case '-': answer = num1 - num2;
        cout << num1 << " " << op << " " << num2 << " = " << answer;
        break;
    case '*': answer = num1 * num2;
        cout << num1 << " " << op << " " << num2 << " = " << answer;
        break;
    case '/': answer = num1 / num2;
        if (num2 == 0)
            cout << "Error: Division by Zero";
        else if (num1 == 0)
            cout << "0";
        break;
    default: cout << "Error: Invalid Operator";

    }



}