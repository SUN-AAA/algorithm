#include <iostream>
using namespace std;

int mod100(int n)
{
    if (n == 1 || n == 2)
        return n * 2;
    return (mod100(n - 1) * mod100(n - 2)) % 100;
}

int main()
{
    int n;
    cin >> n;
    cout << mod100(n);

    return 0;
}