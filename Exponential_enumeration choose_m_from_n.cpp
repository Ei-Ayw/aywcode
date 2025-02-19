#include <iostream>

using namespace std;

const int N = 10;
int n;
int m;
bool used[N];
int s[N];

void dfs(int u)
{
    if (u > m)
    {
        for (int i = 1; i <= m; i++)
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
    m = 2;
    dfs(1); // 从n中任意取m组合
    return 0;
}
