#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    int sum = 0;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            for (int k = 0; k <= n; k++)
            {
                if (i * 1 + j * 2 + k * 5 == n)
                {
                    sum++;
                }
            }
        }
    }
    cout << sum << endl;
    return 0;
}
