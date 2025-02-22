#include <iostream>

using namespace std;

int sum;

int Factorial(int v)
{
    int count = 1;
    for (int i = 1; i <= v; i++)
    {
        count *= i;
    }
    return count;
}

void countSum(int u)
{
    for (int i = 1; i <= u; i++)
    {
        sum += Factorial(i);
    }
}

int main()
{
    int n;
    cin >> n;
    countSum(n);
    cout << sum << endl;
    return 0;
}
