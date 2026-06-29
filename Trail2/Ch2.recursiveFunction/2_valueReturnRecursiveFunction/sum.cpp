#include <iostream>
using namespace std;

int sum(int n)
{
    if (n == 1 || n == 0)
        return n;
    return n + sum(n - 1);
}

int main()
{
    int n;
    cin >> n;
    int tot = sum(n);
    cout << tot;

    return 0;
}