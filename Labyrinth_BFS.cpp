/**
 * AcWing 844. 走迷宫
 */
#include <iostream>
#include <queue>

using namespace std;

const int N = 1e2 + 10;

int g[N][N], d[N][N];
int n, m;
typedef pair<int, int> PII;
queue<PII> q;

int bfs()
{
    int fx[] = {-1, 0, 1, 0}, fy[] = {0, 1, 0, -1};
    for (auto &u : d)
    {
        for (auto &v : u)
        {
            v = -1;
        }
    }

    d[0][0] = 0;
    q.push({0, 0});

    while (!q.empty())
    {
        PII t = q.front();
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int x = t.first + fx[i], y = t.second + fy[i];

            if (x >= 0 && x < n && y >= 0 && y < m && g[x][y] == 0 && d[x][y] == -1)
            {
                d[x][y] = d[t.first][t.second] + 1;
                q.push({x, y});
            }
        }
    }
    return d[n - 1][m - 1];
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
    int result = bfs();
    cout << "Min number of steps: " << result << endl;
    return 0;
}
