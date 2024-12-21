/*
 * Calculator.cpp
 *
 *  Date: November 10, 2024
 *  Author: Stephen Morgan
 */

#include <iostream>

using namespace std;

int main() {       // Changed from void main() to int main()
  double op1, op2; // Changed to double to handle decimal numbers
  char operation;
  char answer = 'Y';

  while (answer == 'Y' || answer == 'y') {
    // Get the expression from user
    cout << "Enter expression (e.g., 2 + 2): ";
    cin >> op1 >> operation >> op2;

    // Calculate and display result based on operation
    switch (operation) { // Using switch instead of multiple if statements
    case '+':
      cout << op1 << " + " << op2 << " = " << op1 + op2 << endl;
      break;
    case '-':
      cout << op1 << " - " << op2 << " = " << op1 - op2 << endl;
      break;
    case '*':
      cout << op1 << " * " << op2 << " = " << op1 * op2 << endl;
      break;
    case '/':
      if (op2 != 0) { // Check for division by zero
        cout << op1 << " / " << op2 << " = " << op1 / op2 << endl;
      } else {
        cout << "Error: Division by zero!" << endl;
      }
      break;
    default:
      cout << "Error: Invalid operator!" << endl;
    }

    // Ask if user wants to continue
    cout << "Do you wish to evaluate another expression? (Y/N): ";
    cin >> answer;
  }

  cout << "Program Finished." << endl;
  return 0;
}
