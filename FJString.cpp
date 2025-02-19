#include <iostream>
#include <string>

using namespace std;

string build(int n)
{
    if (n == 1)
    {
        return "A";
    }
    if (n == 2)
    {
        return "ABA";
    }
    return build(n - 1) + (char)('A' + n - 1) + build(n - 1);
}

int main()
{
    int n = 4;
    cout << "build string: " << build(n);
    return 0;
}
