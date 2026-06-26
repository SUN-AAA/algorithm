#include <iostream>
using namespace std;
bool num(int n)
{
    if ((n % 2 == 0) && (((n / 10) + (n % 10)) % 5 == 0))
        return true;
    return false;
}

int main()
{
    int n;
    cin >> n;
    bool ret = num(n);
    ret ? cout << "Yes" : cout << "No";

    return 0;
}