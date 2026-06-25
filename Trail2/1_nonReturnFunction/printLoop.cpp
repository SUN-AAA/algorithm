#include <iostream>
using namespace std;

void printLoop(int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "12345^&*()_" << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    printLoop(n);
    return 0;
}
