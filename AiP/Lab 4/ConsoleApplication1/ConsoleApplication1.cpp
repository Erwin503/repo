#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    cout << fixed;
    cout.precision(2);
    double fir = 2.66666;
    double sec = 0;
    while (true)
    {
        cout << "Enter first value: ";
        cin >> fir;
        cout << "Enter second value: ";
        cin >> sec;
        cout << "Sum equals to:" << fir + sec << endl;
        cout << "Difference equals to:" << fir - sec << endl;
    }
    return 0;
}

