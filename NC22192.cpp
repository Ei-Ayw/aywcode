#include <iostream>

using namespace std;

bool checkIf(int u)
{
    if (u % 3 != 2)
    {
        return false;
    }
    if (u % 5 != 3)
    {
        return false;
    }
    if (u % 7 != 2)
    {
        return false;
    }
    return true;
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
