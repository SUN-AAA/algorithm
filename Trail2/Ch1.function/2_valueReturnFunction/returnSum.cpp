#include <iostream>
using namespace std;
int sum(int n)
{
    int tot = 0;
    for (int i = 1; i <= n; i++)
    {
        tot += i;
    }
    return tot / 10;
}

int main()
{
    int n;
    cin >> n;
    cout << sum(n) << endl;

    return 0;
}