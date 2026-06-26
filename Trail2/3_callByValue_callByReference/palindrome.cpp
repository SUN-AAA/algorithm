#include <iostream>
#include <string>
using namespace std;
bool palindrome(string &s)
{
    int len = s.length();
    for (int i = 0; i < len / 2; i++)
    {
        if (s[i] != s[len - i - 1])
            return false;
    }
    return true;
}

int main()
{
    string a;
    getline(cin, a);
    if (palindrome(a))
        cout << "Yes";
    else
        cout << "No";

    return 0;
}