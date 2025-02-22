#include <iostream>
#include <cmath>
#include <algorithm>
#include <stack>

using namespace std;

const int N = 1e2 + 10;
int arr[N];
int target;
int num;

int main()
{
    while (scanf("%d", &num) == 1)
    {
        for (int i = 0; i < num; i++)
        {
            cin >> arr[i];
        }
        cin >> target;
        int flag = 0;
        for (int i = 0; i < num; i++)
        {
            if (arr[i] == target)
            {
                cout << i << endl;
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            cout << "No" << endl;
        }
    }

    return 0;
}
