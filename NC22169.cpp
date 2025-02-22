#include <iostream>
#include <algorithm>

using namespace std;

bool checkIf(int u)
{
    string str = to_string(u);
    int i = 0, j = str.length() - 1;
    while (i < j)
    {
        if (str[i++] != str[j--])
        {
            return false;
        }
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
