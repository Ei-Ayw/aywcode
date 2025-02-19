#include <iostream>

using namespace std;

const int N = 1e6 + 10;
int n;
bool used[N];
int s[N];

void dfs(int u)
{
    if (u > n)
    {
        for (int i = 0; i <= n; i++)
        {
            if (s[i])
            {
                cout << s[i] << ' ';
            }
        }
        cout << endl;
        return;
    }
    for (int i = 1; i <= n; i++)
    {
        if (!used[i])
        {
            s[u] = i;
            used[i] = true;
            dfs(u + 1);
            s[u] = 0;
            used[i] = false;
        }
    }
}

int main()
{
    n = 3;
    dfs(1);
    return 0;
}
