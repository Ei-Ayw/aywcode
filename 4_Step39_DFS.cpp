#include <iostream>

using namespace std;

int n;
int sum;

void dfs(int u, int cnt)
{
    if (u == n && cnt % 2 == 0)
    {
        sum++;
        return;
    }
    if (u > n)
    {
        return;
    }
    dfs(u + 1, cnt + 1);
    dfs(u + 2, cnt + 1);
}

int main()
{
    n = 39;
    dfs(0, 0);
    cout << sum << endl;
    return 0;
}
