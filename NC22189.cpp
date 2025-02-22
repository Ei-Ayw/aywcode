#include <iostream>

using namespace std;

bool checkIf(int u)
{
    if (u % 3 != 0)
    {
        return false;
    }
    int count = 0;
    while (u)
    {
        if (u % 10 == 5)
        {
            count++;
            return true;
        }
        u = u / 10;
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (checkIf(i))
        {
            cout << i << endl;
        }
    }
    return 0;
}
