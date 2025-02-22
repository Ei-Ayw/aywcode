#include <iostream>
#include <cmath>
#include <algorithm>
#include <stack>
#include <string>

using namespace std;

const int N = 1e2 + 10;

typedef long long int;

int f[N];
int st[N];

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> f[i];
    }
    for (int i = 0; i < n; i++)
    {
        st[f[i]]++;
    }
    int sum = 0;
    int index = 0;
    for (int i = 0; i < n; i++)
    {
        if (st[f[i]] > sum)
        {
            sum = st[f[i]];
            index = f[i];
        }
    }
    cout << index << endl;
    return 0;
}
