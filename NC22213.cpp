#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

typedef long long int;

int main()
{
    int n;
    cin >> n;
    /**
     * 0x3f 和 0x3f3f3f3f
     * (1)0x3f3f3f3f 转换为十进制是 1061109567，
     * 这个值足够大，可以在很多算法中当作无穷大来使用。
     * 同时，两个 0x3f3f3f3f 相加不会超出 int 类型的表示范围
     * (2)int 类型一般占 4 个字节（32 位）。
     * 当把 0x3f 赋值给 int 类型变量时，
     * 在内存中它会被扩展为 32 位，高 24 位全部为 0，
     * 低 8 位是 0011 1111，值同样为 63。
     */
    int temp = 1000000;
    int ansx = 0;
    int ansy = 0;
    for (int i = 1; i <= n; i++)
    {
        int k = n / i;
        if (k * i == n && k >= i && k - i <= temp)
        {
            temp = k - i;
            ansx = i;
            ansy = k;
        }
    }
    cout << ansx << " " << ansy << endl;
    return 0;
}
