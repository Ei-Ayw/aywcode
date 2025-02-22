#include <iostream>
#include <cmath>
#include <algorithm>
#include <stack>
#include <string>

using namespace std;

const int N = 1e2 + 10;

typedef long long int;

int f[N];

int main()
{
    int n;
    while (cin >> n)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> f[i];
        }
        int target;
        cin >> target;
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            if (f[i] == target && flag == 0)
            {
                flag = 1;
                continue;
            }
            cout << f[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
