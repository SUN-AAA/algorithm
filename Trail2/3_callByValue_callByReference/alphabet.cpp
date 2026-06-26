#include <iostream>
#include <string>
using namespace std;
bool alphaChk(string &a)
{
    int len = a.length();
    for (int i = 0; i < len; i++)
    {
        if (a[i] != a[0])
            return true;
    }
    return false;
}

int main()
{
    string a;
    getline(cin, a);
    alphaChk(a) ? cout << "Yes" : cout << "No";

    return 0;
}