#include <iostream>
using namespace std;

int n;
int arr[100];

int max()
{
    if (n <= 0)
        return arr[0];
    if (arr[n - 1] > arr[n - 2])
        arr[n - 2] = arr[n - 1];
    n--;
    return max();
}

int main()
{
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Please write your code here.
    cout << max();

    return 0;
}