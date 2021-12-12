#include <iostream>
using namespace std;
void main()
{
	struct cord
	{
		int x;
		int y;
	};
	cord point{ 0 , 0 };
	cout << "enter point coordinates : \n";
	cout << "x = ";
	cin >> point.x;
	cout << "y = ";
	cin >> point.y;
	if ((point.x >= -1 && point.x <= 0 && point.y >= 0 && point.y <= 1) || (point.y >= -1 && point.y <= 0 && point.x >= 0 && point.x < 1))
	{
		cout << "this point belongs to area";
	}
	else
	{
		cout << "this point does not belong to area";
	}

}
