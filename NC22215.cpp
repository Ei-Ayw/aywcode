#include <iostream>
#include <cmath>
#include <algorithm>

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
    int a, b;
    cin >> a >> b;
    //     cout << __gcd(a, b) << endl;
    cout << gcd(a, b) << endl;
    return 0;
}
