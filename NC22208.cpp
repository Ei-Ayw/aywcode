#include <iostream>
#include <cstdio>

using namespace std;

void build(int u)
{
    int temp = 1;
    for (int i = 1; i <= u; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            // 这里用cout弄不了的
            printf("%4d", temp);
            temp++;
        }
        cout << endl;
    }
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
