#include <iostream>
using namespace std;
void downUp(int n)
{
    if (n == 0)
        return;
    cout << n << " ";
    downUp(n - 1);
    cout << n << " ";
}

int main()
{
    int n;
    cin >> n;
    downUp(n);

    return 0;
}