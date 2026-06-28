#include <iostream>
using namespace std;
void printLCM(int n, int m)
{
    int min = (n > m) ? m : n;
    int max = (n > m) ? n : m;

    int cnt = 1;
    int lcm = min;

    while (true)
    {
        lcm = min * cnt;
        if (lcm % max == 0)
        {
            cout << lcm << endl;
            break;
        }
        cnt++;
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    printLCM(n, m);

    return 0;
}