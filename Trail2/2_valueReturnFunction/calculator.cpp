#include <iostream>
using namespace std;
bool calc(int a, char o, int b)
{
    if (o == '+')
    {
        cout << a << " " << o << " " << b << " = " << a + b;
        return true;
    }
    else if (o == '-')
    {
        cout << a << " " << o << " " << b << " = " << a - b;
        return true;
    }
    else if (o == '/')
    {
        cout << a << " " << o << " " << b << " = " << (int)(a / b);
        return true;
    }
    else if (o == '*')
    {
        cout << a << " " << o << " " << b << " = " << a * b;
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int a, c;
    char o;
    cin >> a >> o >> c;
    if (!calc(a, o, c))
    {
        cout << "False";
    }

    return 0;
}