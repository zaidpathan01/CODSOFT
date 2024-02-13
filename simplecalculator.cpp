#include <iostream>
using namespace std;
int main() {
double num1, num2, result;
char operation;
cout << "Enter first number: ";
cin >> num1;
cout << "Enter second number: ";
cin >> num2;
cout << "Choose an operation (+, -,*, /): ";
cin >> operation;
switch (operation) {
case '+': result = num1 + num2; break;
case '-': result = num1 - num2; break;
case '*': result = num1 * num2; break;
case '/': result = (num2 != 0) ? num1 / num2 : (cout << "Error:Division by zero is not allowed." << endl, 0); break;
default: cout << "Error: Invalid operation." << endl; return 1;
}
cout << "Result: " << result << endl;
return 0;
}
