#include <iostream>
using namespace std;
void printGCD(int n, int m)
{
    int min = n;
    if (n > m)
        min = m;
    for (int i = min; i > 0; i--)
    {
        if ((n % i == 0) && (m % i == 0))
        {
            cout << i << endl;
            break;
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    printGCD(n, m);

    return 0;
}