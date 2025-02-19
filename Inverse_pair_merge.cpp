#include <iostream>

using namespace std;
typedef long long LL;

const int N = 1e6 + 10;
int a[] = {3, 2, 321, 1, 2}, n;
int backup[N];
LL res;

LL merge(int l, int r)
{
    if (l >= r)
    {
        return 0;
    }
    int mid = (l + r) >> 1;
    res = (LL)merge(l, mid) + merge(mid + 1, r);
    int k = 0, i = l, j = mid + 1;
    while (i <= mid && j <= r)
    {
        if (a[i] > a[j])
        {
            backup[k++] = a[j++];
            res++;
        }
        else
        {
            backup[k++] = a[i++];
        }
    }
    while (i <= mid)
    {
        backup[k++] = a[i++];
    }
    while (j <= r)
    {
        backup[k++] = a[j++];
    }
    return res;
}

int main()
{
    n = sizeof(a) / sizeof(a[0]);
    res = merge(1, n);
    cout << "The number of inverse pair is " << res;
    return 0;
}
