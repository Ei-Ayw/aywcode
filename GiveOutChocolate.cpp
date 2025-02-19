#include <iostream>

using namespace std;
typedef long long LL;

const int MAXN = 1e5 + 10;
const int N = 1e5 + 10;

int n, k;
int h[N] = {6, 5, 6};
int w[N] = {5, 6, 6};
int MaxH, MaxW, MaxA;

int check(int m)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += (h[i] / m) * (w[i] / m);
    }
    return ans;
}

int main()
{
    n = 3;
    k = 3;
    // 二分查找搜索可能的边长
    int l = 1, r = 1e5, mid;
    while (l < r)
    {
        mid = l + r + 1 >> 1;
        if (check(mid) >= k)
        {
            l = mid;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << l << endl;
    return 0;
}
