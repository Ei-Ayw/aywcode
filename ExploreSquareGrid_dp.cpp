#include <iostream>

using namespace std;

int n, m, ans;
int f[35][35]; // 定义 f[i][j] 为到达位置 (i, j) 的路径数量。

int main()
{
    n = 5;
    m = 7;
    if (n % 2 == 0 && m % 2 == 0)
    {
        cout << "0";
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                if (i == 1 && j == 1)
                {
                    f[i][j] = 1;
                }
                else if (i % 2 == 1 || j % 2 == 1)
                {
                    f[i][j] = f[i - 1][j] + f[i][j - 1];
                }
            }
        }
        cout << "Total number of methods is " << f[n][m] << endl;
    }
}
