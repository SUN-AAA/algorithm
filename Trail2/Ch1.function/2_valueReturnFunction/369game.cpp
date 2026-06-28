#include <iostream>
using namespace std;
bool check369(int n)
{
    int chk = 1000000;
    while (true)
    {
        if ((n / chk == 3) || (n / chk == 6) || (n / chk == 9) || (n % 10 == 3) || (n % 10 == 6) || (n % 10 == 9))
        {
            return true;
        }
        n %= chk;
        chk /= 10;
        if (chk < 10)
            return false;
    }
}

bool is369(int n)
{
    if ((n != 0) && ((n % 3 == 0) || check369(n)))
        return true;
    return false;
}

int main()
{
    int a, b;
    cin >> a >> b;
    int cnt = 0;
    for (int i = a; i <= b; i++)
    {
        if (is369(i))
        {
            // cout << i << " ";
            cnt++;
        }
    }
    cout << cnt;
}