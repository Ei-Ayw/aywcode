#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>

using namespace std;

const int N = 1e2 + 10;
int f[N][N];
char s[N];
char t[N];

int main()
{
    scanf("%s %s", s + 1, t + 1);
    int n = strlen(s + 1);
    int m = strlen(t + 1);
    memset(f, 0x3f, sizeof(f));
    for (int i = 1; i <= n; i++)
    {
        f[i][0] = 0;
    }
    f[0][0] = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            f[i][j] = min(f[i][j], f[i - 1][j]);
            if (s[i] == t[j])
            {
                f[i][j] = min(f[i][j], f[i - 1][j - 1]);
            }
            else
            {
                f[i][j] = min(f[i][j], f[i - 1][j - 1] + 1);
            }
        }
    }
    cout << "The minimum number of characters needs to be changed: " << f[n][m] << endl;
    return 0;
}
