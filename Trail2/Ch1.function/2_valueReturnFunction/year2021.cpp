#include <iostream>
using namespace std;
bool chkMonth(int m)
{
    if (1 <= m && m <= 12)
        return true;
    return false;
}

bool chkDate(int m, int d)
{
    if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
    {
        if (1 <= d && d <= 31)
            return true;
        return false;
    }
    else if (m == 2)
    {
        if (1 <= d && d <= 28)
            return true;
        return false;
    }
    else
    {
        if (1 <= d && d <= 30)
            return true;
        return false;
    }
}

int main()
{
    int m, d;
    cin >> m >> d;
    if (chkMonth(m) && chkDate(m, d))
        cout << "Yes";
    else
        cout << "No";

    return 0;
}