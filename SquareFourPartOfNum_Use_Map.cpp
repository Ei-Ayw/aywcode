#include <iostream>
#include <map>
#include <cmath>

using namespace std;

typedef pair<int, int> PII;

int n;
map<int, PII> mp; // 对于一种平方和只存字典序最大的pair

int main()
{
    int n = 89;
    for (int c = 0; c * c <= n; c++)
    {
        for (int d = 0; c * c + d * d <= n; d++)
        {
            if (!mp.count(c * c + d * d))
            {
                mp[c * c + d * d] = {c, d};
            }
        }
    }
    for (int a = 0; a * a <= n; a++)
    {
        for (int b = 0; a * a + b * b <= n; b++)
        {
            if (mp.count(n - a * a + b * b))
            {
                cout << a << " " << b << " " << mp[n - a * a + b * b].first << " " << mp[n - a * a + b * b].second << endl;
                return 0;
            }
        }
    }
    return 0;
}
