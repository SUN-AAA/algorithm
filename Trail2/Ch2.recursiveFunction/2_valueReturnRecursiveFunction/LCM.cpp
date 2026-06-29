#include <iostream>

using namespace std;

int n;
int arr[10];
int cnt = 1;
int maxN = 1;

int lcm(int m)
{
    int chk = 0;
    for (int i = 0; i < n; i++)
    {
        if (m % arr[i] != 0)
        {
            chk = 1;
            break;
        }
    }
    if (chk == 0)
        return m;
    return lcm(maxN * (++cnt));
}

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Please write your code here.
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxN)
            maxN = arr[i];
    }

    cout << lcm(maxN);

    return 0;
}