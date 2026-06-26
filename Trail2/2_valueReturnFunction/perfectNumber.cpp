#include <iostream>
using namespace std;
bool Even(int n)
{
    if (n % 2 == 0)
        return true;
    return false;
}

bool firstNum(int n)
{
    if (n % 10 == 5)
        return true;
    return false;
}

bool threeAndNine(int n)
{
    if ((n % 3 == 0) && (n % 9 != 0))
        return true;
    return false;
}

int main()
{
    int a, b;
    cin >> a >> b;
    int cnt = 0;
    for (int i = a; i <= b; i++)
    {
        if (!Even(i) && !firstNum(i) && !threeAndNine(i))
            cnt++;
    }
    cout << cnt;

    return 0;
}