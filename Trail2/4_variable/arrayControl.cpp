#include <iostream>

using namespace std;

int n, m;
int A[100];

int sumOfArr(int a[], int n, int m)
{
    int tot = 0;
    while (m != 0)
    {
        tot += a[m - 1];
        (m % 2 == 0) ? m /= 2 : m--;
    }
    return tot;
}

int main()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    // Please write your code here.
    int tot = sumOfArr(A, n, m);
    cout << tot;

    return 0;
}