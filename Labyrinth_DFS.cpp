/**
 * AcWing 844. 走迷宫
 */
#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

const int N = 1e2 + 10;
int g[N][N];
int ans = N * N; // 记录到(n-1,m-1)的最少步数
int fx[4] = {-1, 0, 1, 0}, fy[4] = {0, 1, 0, -1};
int st[N][N]; // 记录到当前点的步数
int n, m;

void dfs(int x, int y, int cnt)
{
    if (cnt > ans)
    {
        return;
    }

    if (x == n - 1 && y == m - 1)
    {
        ans = cnt;
        return;
    }

    for (int i = 0; i < 4; i++)
    {
        int newx = x + fx[i];
        int newy = y + fy[i];

        // st[newx][newy] > st[x][y] + 1 是一个剪枝操作
        if (newx >= 0 && newx < n && newy >= 0 && newy < m && g[newx][newy] == 0 && st[newx][newy] > st[x][y] + 1)
        {
            st[newx][newy] = st[x][y] + 1;
            dfs(newx, newy, cnt + 1);
        }
    }
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> g[i][j];
        }
    }
    memset(st, 0x3f, sizeof(st));
    st[0][0] = 0;
    dfs(0, 0, 0);
    cout << "Min number of steps: " << ans << endl;
    return 0;
}
