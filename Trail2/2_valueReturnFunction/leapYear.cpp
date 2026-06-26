#include <iostream>
#include <iomanip>
using namespace std;
bool isLeapYear(int y)
{
    if ((y % 4 == 0))
    {
        if ((y % 100 == 0) && (y % 400 != 0))
        {
            return false;
        }
        return true;
    }
    return false;
}

int main()
{
    int y;
    cin >> y;
    cout << boolalpha << isLeapYear(y);

    return 0;
}