#include <iostream>
using namespace std;
void printRectangle(int n)
{
    int current = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (current > 9)
                current = 1;
            cout << current++ << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    printRectangle(n);
    return 0;
}