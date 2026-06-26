#include <iostream>
using namespace std;
bool isPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

bool isEven(int n)
{
    if (((n / 100) + (n % 100 / 10) + (n % 100 % 10)) % 2 == 0)
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
        if (isPrime(i) && isEven(i))
        {
            cnt++;
        }
    }
    cout << cnt << endl;

    return 0;
}