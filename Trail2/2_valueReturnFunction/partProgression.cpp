#include <iostream>

using namespace std;

int n1, n2;
int a[100], b[100];
bool isPart(int a[], int b[])
{
    for (int i = 0; i < n1; i++)
    {
        if (a[i] == b[0])
        {
            int chk = 0;
            for (int j = 0; j < n2; j++)
            {
                if (a[i + j] != b[j])
                {
                    chk = 1;
                    break;
                }
            }
            if (chk == 0)
                return true;
        }
    }
    return false;
}

int main()
{
    cin >> n1 >> n2;

    for (int i = 0; i < n1; i++)
        cin >> a[i];

    for (int i = 0; i < n2; i++)
        cin >> b[i];

    // Please write your code here.
    isPart(a, b) ? cout << "Yes" : cout << "No";

    return 0;
}