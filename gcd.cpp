#include <iostream>

using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}

int main()
{
    int a = 10;
    int b = 20;
    cout << "最大公约数：" << gcd(10, 20) << endl;
    cout << "最小公倍数：" << a * b / gcd(10, 20) << endl;
}
