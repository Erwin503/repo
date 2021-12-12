#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	setlocale(0, "");
	int numb1, numb2;
	float sum;
	cout << "Введите 1 число = ";
	cin >> numb1;
	cout << "Введите 2 число = ";
	cin >> numb2;
	sum = (-numb1 + sqrt(numb1 ^ 2 + 3 * numb2)) / 2 * numb2;
	cout << "1 Пример: " << sum << endl;
	sum = sqrt((3 + numb1 * numb2) / 4 * numb1 ^ 2);
	cout << "2 Пример: " << sum << endl;
	sum = (6 - fabs(numb1 - 3 * numb2)) / sqrt(5 - numb2 ^ 2);
	cout << "3 Пример: " << sum << endl;
	sum = exp(numb1 + 7) * sqrt(37 * numb2 - numb1 ^ 3);
	cout << "4 Пример: " << sum << endl;
	sum = sin(numb1) + (numb2 ^ 2) / (cos(2 * numb1) + 23);
	cout << "5 Пример: " << sum << endl;
	sum = tan(numb2) - fabs(numb1 - 3 * numb2 + 2 / sqrt(numb2 + 4));
	cout << "6 Пример: " << sum << endl;
}
