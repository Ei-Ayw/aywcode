#include <iostream>

using namespace std;

typedef long long LL;

int main()
{
    LL n = 2021041820210418;
    LL sum = 0;
    for (LL l = 1; l <= n; l++)
    {
        for (LL w = l; w * l <= n; w++)
        {
            for (LL h = w * l; l * w * h <= n; h++)
            {
                if (l * w * h == n)
                {
                    sum++;
                }
            }
        }
    }
    cout << "The sum of options: " << sum << endl;
    return 0;
}
