#include <iostream>
#include <string>

using namespace std;

int add(int a, int b) {
	int sum = a + b;
	cout << endl << "Sum of the two number is: " << sum;
	return sum;
}
int subtract(int a, int b) {
	int diff = a - b;
	cout << endl << "Difference of the two number is: " << diff;
	return diff;
}
int multiply(int a, int b) {
	int prod = a * b;
	cout << endl << "Product of the two number is: " << prod;
	return prod;
}
int divide(int a, int b) {
	int quot = a / b;
	cout << endl << "Quotient of the two number is: " << quot;
	return quot;
}

// MAIN function
int main()
{
	int number1, number2;
	char whichOperator;
	
	cout << "Enter first number: ";
	cin >> number1;
	cout << "Enter second number: ";
	cin >> number2;
	cout << "Which operator do you want to do? A - Add | S - Subtract | M - Multiply | D - Divide" << endl;
	cin >> whichOperator;

	switch (whichOperator) {
	case 'A':
	case'a':
		add(number1, number2);
		break;
	case'S':case's':
		subtract(number1, number2);
		break;
	case'M':case'm':
		multiply(number1, number2);
		break;
	case'D':case'd':
		divide(number1, number2);
		break;
	default:
		cout << "Wrong Input";
		break;
	}
	cout << endl << endl;
	cout << "I'll just show you a preview of the other operations using the two numbers: ";
	subtract(number1, number2);
	multiply(number1, number2);
	divide(number1, number2);
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
