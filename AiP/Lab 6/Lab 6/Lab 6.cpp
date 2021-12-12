#include <iostream>
using namespace std;


int main()
{
	int code;
	char ch;
	cout << "type characters and press Enter: ";
	cin >> ch;
	code = (int)ch;
	cout << "ASCII - code is: " << code << endl;
	cout << "the previous character is: " << (char)(code - 1) << endl;
	cout << "the next character is: " << (char)(code + 1) << endl;
	cin.get();
	cout << endl << "press Enter to exit";
}

