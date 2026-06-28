#include <iostream>
#include <string>
using namespace std;

int n, m, idx;
string big, part;

void findIdx()
{
    int cnt = 1;
    for (int i = 0; i < n; i++)
    {
        if (big[i] == part[0])
        {
            cnt = 0;
            for (int j = 0; j < m; j++)
            {
                if (big[i + j] != part[j])
                {
                    cnt = 1;
                    break;
                }
            }
            if (cnt == 0)
            {
                idx = i;
                break;
            }
        }
    }

    if (cnt == 1)
    {
        idx = -1;
    }
}

int main()
{
    getline(cin, big);
    getline(cin, part);

    n = big.length();
    m = part.length();

    findIdx();

    cout << idx;

    return 0;
}