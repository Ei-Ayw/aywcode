#include <iostream>
#include <cmath>
#include <algorithm>
#include <stack>
#include <string>

using namespace std;

const int N = 1e2 + 10;

int f[N][N];
int n;

void Circlematrix(int u)
{
    int left = 1, right = u, top = 1, bottom = u;
    int num = 1;

    while (left <= right && top <= bottom)
    {
        // 从上到下填充左侧列
        for (int i = top; i <= bottom; i++)
        {
            f[i][left] = num++;
        }
        left++;

        // 如果还有列，从下到上填充右侧列
        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                f[i][left] = num++;
            }
            left++;
        }
    }

    // 输出矩阵
    for (int i = 1; i <= u; i++)
    {
        for (int j = 1; j <= u; j++)
        {
            cout << f[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    cin >> n;
    Circlematrix(n);
    return 0;
}
