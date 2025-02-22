#include <iostream>
#include <cmath>
#include <algorithm>
#include <stack>

using namespace std;

typedef long long int;

const int N = 1e2 + 10;
int Tr[N];

int main()
{
    int num;
    int date;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        cin >> Tr[i];
    }
    cin >> date;
    for (int i = 0; i < date; i++)
    {
        int temp1;
        int temp2;
        int temp;
        cin >> temp1 >> temp2 >> temp;
        for (int j = temp1; j <= temp2; j++)
        {
            Tr[j - 1] += temp;
        }
    }
    for (int i = 0; i < num; i++)
    {
        cout << Tr[i] << " ";
    }
    cout << endl;
    return 0;
}
