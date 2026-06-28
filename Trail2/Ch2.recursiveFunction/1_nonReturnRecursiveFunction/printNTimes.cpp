#include <iostream>
using namespace std;
void printHelloWorld(int n)
{
    if (n == 0)
        return;
    cout << "HelloWorld" << endl;
    printHelloWorld(n - 1);
}

int main()
{
    int n;
    cin >> n;
    printHelloWorld(n);

    return 0;
}