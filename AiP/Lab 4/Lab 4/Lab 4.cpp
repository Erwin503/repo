#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    char st[6];
    char ch;
    while (true)
    {
        cout << "type characters and press Enter: ";
        cin >> st;
        ch = st[0];
        st[0] = st[4];
        st[4] = ch;
        cout << "the result is: " << st << endl;
    }
    return 0;
}
