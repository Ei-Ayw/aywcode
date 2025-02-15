#include <iostream>

using namespace std;

int main()
{
    for (int i = 0; i < 30; i++)
    {
        for (int j = 0; j < 30; j++)
        {
            if (i < j && i * j == (i + j) * 6 && (j - i) <= 8)
            {
                cout << i << " " << j << endl;
            }
        }
    }
    return 0;
}
