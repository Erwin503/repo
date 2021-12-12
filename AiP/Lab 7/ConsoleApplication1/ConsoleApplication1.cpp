#include <iostream>
using namespace std;
void main()
{
	char sign;
	double num1, num2, result;
	cin >> num1;
	cin >> sign;
	cin >> num2;
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
	cout << result;
}

