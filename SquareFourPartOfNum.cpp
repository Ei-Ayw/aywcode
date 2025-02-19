#include <iostream>
#include <algorithm>

using namespace std;

const int N = 1e5 + 10;

struct Sum
{
    int s;
    int c;
    int d;
};

bool compare(Sum a, Sum b)
{
    return a.s < b.s;
}

int main()
{
    int n = 89;
    int idx = 0;
    Sum h[N];
    for (int c = 0; c * c <= n; c++)
    {
        for (int d = 0; c * c + d * d <= n; d++)
        {
            h[idx++] = {c * c + d * d, c, d};
        }
    }
    std::sort(h, h + idx, compare);
    for (int a = 0; a * a <= n; a++)
    {
        for (int b = 0; a * a + b * b <= n; b++)
        {
            int l = 0, r = idx - 1;
            while (l < r)
            {
                int mid = l + r + 1 >> 1;
                if (h[mid].s > n - (a * a + b * b))
                {
                    r = mid + 1;
                }
                else if (h[mid].s < n - (a * a + b * b))
                {
                    l = mid;
                }
                else
                {
                    cout << "result: " << a << " " << b << " " << h[mid].c << " " << h[mid].d << endl;
                    return 0;
                }
            }
        }
    }
    return 0;
}