#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool checkIf(int n)
{
    string str = to_string(n);
    int tempSum = std::count(str.begin(), str.end(), '2') + std::count(str.begin(), str.end(), '0') + std::count(str.begin(), str.end(), '1') + std::count(str.begin(), str.end(), '9');
    if (tempSum)
    {
        return true;
    }
    return false;
}

int main()
{
    int n;
    int sum = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (checkIf(i))
        {
            sum += i;
        }
    }
    cout << sum << endl;
    return 0;
}
