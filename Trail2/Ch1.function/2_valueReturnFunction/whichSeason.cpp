#include <iostream>
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

bool chkMonth(int m)
{
    if (1 <= m && m <= 12)
        return true;
    return false;
}

bool chkDate(int y, int m, int d)
{
    if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
    {
        if (1 <= d && d <= 31)
            return true;
        return false;
    }
    else if (m == 2)
    {
        if (isLeapYear(y))
        {
            if (1 <= d && d <= 29)
                return true;
            return false;
        }
        else
        {
            if (1 <= d && d <= 28)
                return true;
            return false;
        }
    }
    else
    {
        if (1 <= d && d <= 30)
            return true;
        return false;
    }
}

void printSeason(int m)
{
    if (3 <= m && m <= 5)
        cout << "Spring";
    else if (6 <= m && m <= 8)
        cout << "Summer";
    else if (9 <= m && m <= 11)
        cout << "Fall";
    else
        cout << "Winter";
}

int main()
{
    int y, m, d;
    cin >> y >> m >> d;
    if (chkMonth(m) && chkDate(y, m, d))
    {
        printSeason(m);
    }
    else
    {
        cout << -1;
    }

    return 0;
}