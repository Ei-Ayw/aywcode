#include <iostream>

using namespace std;

typedef long long LL;

const int N = 1e2 + 10;
LL f[N];

LL Fibonacci(int u)
{
    f[1] = 0;
    f[2] = 1;
    for (LL i = 3; i <= u; i++)
    {
        f[i] = f[i - 1] + f[i - 2];
    }
    return f[u];
}

int main()
{
    int n;
    cin >> n;
    cout << Fibonacci(n) << endl;
    return 0;
}
