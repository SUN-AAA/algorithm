#include <iostream>
using namespace std;
/*
//내가 쓴 더티코드
int idx = 1;

void upperPrint(int n)
{
    if (idx > n)
        return;
    cout << idx << " ";
    idx++;
    upperPrint(n);
}
*/

// 해설지 클린코드
void upperPrint(int n)
{
    if (n == 0)
        return;

    upperPrint(n - 1);
    cout << n << " ";
}

void lowerPrint(int n)
{
    if (n <= 0)
        return;
    cout << n << " ";
    lowerPrint(n - 1);
}

int main()
{
    int n;
    cin >> n;
    upperPrint(n);
    cout << endl;
    lowerPrint(n);

    return 0;
}