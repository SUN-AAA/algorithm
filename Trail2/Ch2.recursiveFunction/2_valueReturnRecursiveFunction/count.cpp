#include <iostream>
using namespace std;

// 더티코드 : cnt와 return값을 따로 계산
/*
int cnt = 0;

int count(int n)
{
    if (n == 1)
        return cnt;
    if (n % 2 == 0)
    {
        ++cnt;
        return count(n / 2);
    }
    else
    {
        ++cnt;
        return count(n / 3);
    }
}
*/

// 클린코드 : cnt와 return값을 한번에 계산
int GetNum(int n)
{
    if (n == 1)
        return 0;
    if (n % 2 == 0)
        return GetNum(n / 2) + 1;
    else
        return GetNum(n / 3) + 1;
}

int main()
{
    int n;
    cin >> n;
    // cout << count(n);
    cout << GetNum(n);

    return 0;
}