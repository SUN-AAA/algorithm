#include <iostream>
using namespace std;
int involution(int a, int b)
{
    int res = 1;
    for (int i = 0; i < b; i++)
    {
        res *= a;
    }
    return res;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << involution(a, b);

    return 0;
}