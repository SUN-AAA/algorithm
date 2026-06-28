#include <iostream>
using namespace std;
bool isPirmeNum(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int a, b;
    cin >> a >> b;
    int tot = 0;
    for (int i = a; i <= b; i++)
    {
        if (isPirmeNum(i))
        {
            tot += i;
        }
    }
    cout << tot;

    return 0;
}