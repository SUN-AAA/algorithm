#include <iostream>
using namespace std;

int sum(int n)
{
    if (n / 10 < 1)
        return n;
    return (n % 10) + sum(n / 10);
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << sum(a * b * c);

    return 0;
}