#include <iostream>
#include <cmath>
#include <algorithm>
#include <stack>

using namespace std;

const int N = 1e2 + 10;
int f[N];
int m[N];

int main()
{
    int maxSum = 0;
    int mnum, fnum;
    cin >> mnum >> fnum;
    for (int i = 0; i < mnum; i++)
    {
        cin >> m[i];
    }
    for (int j = 0; j < fnum; j++)
    {
        cin >> f[j];
    }
    for (int i = 0; i < mnum; i++)
    {
        for (int j = 0; j < fnum; j++)
        {
            if (m[i] + f[j] > maxSum)
            {
                maxSum = m[i] + f[j];
            }
        }
    }
    cout << maxSum << endl;
    return 0;
}
