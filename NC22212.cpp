#include <iostream>
#include <algorithm>
#include <cstring>
#include <cmath>

using namespace std;

const int N = 5;
int f[N][N];     // 地点输入记录
int ans = N * N; // 记录到(2,2)的最少步数
int indexI = 0;
int indexJ = 0;

int main()
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> f[i][j];
            if (f[i][j])
            {
                indexI = i;
                indexJ = j;
            }
        }
    }
    cout << abs(indexI - 2) + abs(indexJ - 2);
    return 0;
}
