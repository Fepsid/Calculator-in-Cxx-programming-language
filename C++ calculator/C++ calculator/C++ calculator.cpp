#include <iostream>
#include <cmath>

void Calculate(long double num1, char simvol, long double num2)
{
	switch (simvol)
	{
	case '+':
		std::cout << "Result: " << num1 + num2 << std::endl;
		break;

	case '-':
		std::cout << "Result: " << num1 - num2 << std::endl;
		break;

	case '*':
		std::cout << "Result: " << num1 * num2 << std::endl;
		break;

	case '/':
		if (num2 == 0)
			std::cout << "You cannot divide by 0!" << std::endl;
		else
			std::cout << "Result: " << num1 / num2;
		break;

	case '%':
		std::cout << "Percentage of" << num1 << ": " << (num1 * num2 / 100) << std::endl;
		break;

	case '^':
		std::cout << "Result: " << std::pow(num1, num2) << std::endl;
		break;

	case 'r':
		if (num1 < 0)
			std::cout << "Invalid number to calculate the root" << std::endl;
		else
			std::cout << "Square root of " << num1 << " = " << std::sqrt(num1) << std::endl;
		break;

	default:
		std::cout << "Invalid operation: " << simvol << std::endl;
	}
}

int main()
{
	long double FirstNumber;
	long double SecondNumber;
	char operation;
	std::cout << "=============================================================" << std::endl;
	std::cout << "CALCULATOR" << "                                                 =" << std::endl;
	std::cout << "=============================================================" << std::endl;
	std::cout << "Operation (+, -, *, /, %, ^, r - square root): ";
	std::cin >> operation;
	std::cout << "=============================================================" << std::endl;
	std::cout << "The first number: ";
	std::cin >> FirstNumber;
	std::cout << "=============================================================" << std::endl;
	std::cout << "The second number: ";
	std::cin >> SecondNumber;
	std::cout << "=============================================================" << std::endl;
	Calculate(FirstNumber, operation, SecondNumber);
	system("pause");
	return 0;
}