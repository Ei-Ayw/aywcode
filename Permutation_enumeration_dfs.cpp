#include <iostream>

using namespace std;

const int N = 10;
int n;
bool used[N]; // 记录当前数字是否使用过
int s[N];     // 记录方案，s[i]表示第i个位置填的是s[i]

void dfs(int u)
{
    if (u > n)
    {
        for (int i = 1; i <= n; i++)
        {
            if (s[i])
            {
                cout << s[i] << ' ';
            }
        }
        cout << endl;
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
    dfs(1); // 递归函数 dfs(int u) 表示当前正在考虑第 u 个位置应该放哪个数。
    return 0;
}
