#include <iostream>
#include <cmath>
#include <algorithm>
#include <stack>
#include <string>

using namespace std;

const int N = 1e2 + 10;
char f[N][N];
char st[N][N];

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> f[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (f[i][j] == '?')
            {
                int sum = 0;
                for (int idx = -1; idx <= 1; idx++)
                {
                    for (int idy = -1; idy <= 1; idy++)
                    {
                        if (f[i - idx][j - idy] == '*')
                        {
                            sum++;
                        }
                    }
                }
                st[i][j] = sum + '0';
                sum = 0;
            }
            else
            {
                st[i][j] = '*';
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << st[i][j];
        }
        cout << endl;
    }
    return 0;
}
