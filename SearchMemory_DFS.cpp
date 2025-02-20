#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

const int N = 1e2 + 10;
int n, m;
int mer[N][N]; // 记忆化，从当前点到(n,m)有mer[i][j]中方案

int dfs(int x, int y)
{
    if (x > n || y > m)
    {
        return 0;
    }
    if (x == n && y == m)
    {
        return 1;
    }
    if (mer[x][y] != -1)
    {
        return mer[x][y];
    }
    mer[x][y] = dfs(x + 1, y) + dfs(x, y + 1);
    return mer[x][y];
}

int main()
{
    cin >> n >> m;
    memset(mer, -1, sizeof(mer));
    cout << "Total plans of active (n,m): " << dfs(1, 1) << endl;
    return 0;
}
