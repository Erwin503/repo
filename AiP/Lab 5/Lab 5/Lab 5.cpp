#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	string st;
	char ch;
	cout << "type characters and press Enter: ";
	cin >> st;
	swap(st[0], st[st.length() - 1]);
	swap(st[st.length() - 1], st[2]);
	swap(st[2], st[0]);
	cout << "the result is: " << st << endl;
	cin.get();
}

