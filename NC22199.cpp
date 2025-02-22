#include <iostream>
#include <string>

using namespace std;

int sum;

int main()
{
    int n;
    cin >> n;

    while (n)
    {
        sum += n % 10;
        n /= 10;
    }
    cout << sum << endl;

    return 0;
}
