#include <iostream>
#include <cstdio>

using namespace std;

void build(int u)
{
    int temp = 1;
    int tempSpace = u - 1;
    for (int i = 1; i <= u; i++)
    {
        for (int j = 1; j <= tempSpace; j++)
        {
            cout << " ";
        }
        tempSpace--;
        for (int j = 1; j <= temp; j++)
        {
            cout << "*";
        }
        cout << endl;
        temp += 2;
    }
    return;
}

int main()
{
    int n;
    while (cin >> n)
    {
        build(n);
    }
    return 0;
}
