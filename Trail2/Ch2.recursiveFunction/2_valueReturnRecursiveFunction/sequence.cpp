#include <iostream>
using namespace std;
int seq(int n)
{
    if (n == 1 || n == 2)
        return n;
    return seq((int)(n / 3)) + seq(n - 1);
}

int main()
{
    int n;
    cin >> n;
    cout << seq(n);

    return 0;
}