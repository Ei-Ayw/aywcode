#include <iostream>
#include <string>

using namespace std;

bool checkIf(int u)
{
    if (u == 1)
    {
        return false;
    }
    for (int i = 2; i < u; i++)
    {
        if (u % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    int v;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> v;
        if (checkIf(v))
        {
            cout << "Yes" << endl;
            continue;
        }
        cout << "No" << endl;
    }
    return 0;
}
