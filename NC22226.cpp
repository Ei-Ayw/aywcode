#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

typedef long long LL;

const int N = 1000000;
LL st[N];

// 优化后的质数判断函数
bool isPrime(LL v)
{
    if (v < 2)
        return false;
    for (LL i = 2; i <= sqrt(v); i++)
    {
        if (v % i == 0)
            return false;
    }
    return true;
}

// 计算 1 到 num 范围内的质数个数
LL countPrimes(LL num)
{
    LL count = 0;
    for (LL i = num; i >= 1; i--)
    {
        if (st[i] > 0)
        {
            count += st[i];
            break;
        }

        if (isPrime(i))
        {
            count++;
        }
    }
    return count;
}

int main()
{
    LL n;
    cin >> n;
    int count = 0;
    for (LL i = 1; i <= 1000000; i++)
    {
        if (isPrime(i))
        {
            count++;
            st[i] = count;
        }
    }
    for (LL i = 0; i < n; i++)
    {
        LL num;
        cin >> num;
        cout << countPrimes(num) << endl;
    }
    return 0;
}
