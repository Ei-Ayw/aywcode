#include <iostream>
#include <string>

using namespace std;

bool checkIf(int u)
{
    string str = to_string(u);
    int a = (str[0] - '0') * 10 + (str[1] - '0');
    int b = (str[2] - '0') * 10 + (str[3] - '0');
    if ((a + b) * (a + b) == u)
    {
        return true;
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 1000; i <= n; i++)
    {
        if (checkIf(i))
        {
            cout << i << endl;
        }
    }
    return 0;
}
