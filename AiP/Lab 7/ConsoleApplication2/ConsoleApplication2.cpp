#include <iostream>
using namespace std;
int main()
{

	char sign;
	double num1, num2, result;
	while (true)
	{
		cout << "enter number 1: ";
		cin >> num1;
		cout << "enter sign: ";
		cin >> sign;
		if (sign != '+' && sign != '-' && sign != '*' && sign != '/')
		{
			cout << "error: wrong symbol";
			break;
		}
		cout << "enter number 2: ";
		cin >> num2;
		if (sign != '/' && num2 == 0)
		{
			cout << "error: division by zero";
			break;
		}
		switch (sign)
		{
		case '+':
		{
			result = num1 + num2;
			break;
		}
		case '-':
		{
			result = num1 - num2;
			break;
		}
		case '*':
		{
			result = num1 * num2;
			break;
		}
		case '/':
		{
			result = num1 / num2;
			break;
		}

		}
		cout << "the rresult is: " << result << endl;
	}
}

}

