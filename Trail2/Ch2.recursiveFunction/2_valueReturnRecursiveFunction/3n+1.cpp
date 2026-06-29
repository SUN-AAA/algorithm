#include <iostream>
using namespace std;
int calc(int n)
{
    if (n == 1)
        return 0;
    if (n % 2 == 0)
        return 1 + calc(n / 2);
    else
        return 1 + calc(3 * n + 1);
}

int main()
{
    int n;
    cin >> n;
    cout << calc(n);

    return 0;
}