#include <iostream>
#include <cmath>
#include <algorithm>
#include <stack>

using namespace std;

typedef long long int;

const int N = 1e2 + 10;
int score[N];
long long num;

int main()
{
    while (scanf("%d", &num) == 1)
    {
        for (int i = 0; i < num; i++)
        {
            cin >> score[i];
        }
        double sum = 0;
        double count = 0;
        for (int i = 0; i < num; i++)
        {
            sum += score[i];
            count++;
        }
        double average = sum / count;
        for (int i = 0; i < num; i++)
        {
            if (score[i] < average)
            {
                cout << score[i] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
