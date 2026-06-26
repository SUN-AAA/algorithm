#include <iostream>
using namespace std;
void abs(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
            arr[i] = -arr[i];
    }
}

int main()
{
    int n;
    int arr[50];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    abs(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}