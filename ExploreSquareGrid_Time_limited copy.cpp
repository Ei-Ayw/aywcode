#include <iostream>

using namespace std;

const int N = 20;
int n;
int m;
int ans;

void dfs(int u, int v)
{
    if (u > n || v > m)
    {
        return;
    }

    if (u % 2 == 0 && v % 2 == 0)
    {
        return;
    }
    if (u == n && v == m)
    {
        ans++;
    }
    dfs(u + 1, v); // 向右走
    dfs(u, v + 1); // 向下走
    return;
}

int main()
{
    n = 5;
    m = 7;
    if (n % 2 == 0 && m % 2 == 0)
    {
        return 0;
    }
    else
    {
        dfs(1, 1);
    }
    cout << "Total number of methods is " << ans << endl;
    return 0;
}
