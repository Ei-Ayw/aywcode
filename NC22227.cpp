#include <iostream>
#include <cmath>
#include <algorithm>
#include <stack>
#include <string>
#include <queue>

using namespace std;

bool checkIf(queue<int> q)
{
    queue<int> w = q;
    w.pop();
    if (w.empty())
    {
        return true;
    }
    return false;
}

int main()
{
    int n, k, m;
    queue<int> q;
    cin >> n >> k >> m;
    for (int i = 0; i < n; i++)
    {
        q.push(i);
    }
    int index = 0;
    while (k--)
    {
        int temp = q.front();
        q.pop();
        q.push(temp);
    }

    while (true)
    {
        int temp = q.front();
        index++;
        q.pop();
        if (index == m)
        {
            index = 0;
            if (q.empty())
            {
                cout << temp << endl;
                return 0;
            }
            continue;
        }
        if (q.empty())
        {
            cout << temp << endl;
            return 0;
        }
        q.push(temp);
    }
    return 0;
}
