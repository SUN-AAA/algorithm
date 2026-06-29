#include <iostream>
using namespace std;

int sum(int n)
{
    if (n == 1 || n == 2)
        return n;
    return n + sum(n - 2);
}

int main()
{
    int n;
    cin >> n;
    cout << sum(n);

    return 0;
}