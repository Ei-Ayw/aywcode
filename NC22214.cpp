#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

typedef long long int;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    for (int i = 0; i * a <= c; i++)
    {
        int temp = c - i * a;
        if (temp % b == 0)
        {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}
