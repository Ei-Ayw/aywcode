#include <iostream>
#include <cstring>

using namespace std;

const int N = 35;
int n, m;
long long mer[N][N];

/**
 * DFS 记忆化搜索，降低时间复杂度
 */
long long dfs(int x, int y)
{
    if (x > n || y > m || (x % 2 == 0 && y % 2 == 0))
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
    long long ans = dfs(x, y + 1) + dfs(x + 1, y);
    return mer[x][y] = ans;
}

int main()
{
    n = 5;
    m = 7;
    memset(mer, -1, sizeof(mer));
    int ans = dfs(1, 1);
    cout << "Total number of methods is " << ans << endl;
    return 0;
}
