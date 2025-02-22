#include <iostream>
#include <cmath>
#include <algorithm>
#include <stack>
#include <string>
#include <map>
#include <vector>

using namespace std;

const int N = 1e2 + 10;
vector<int> arr(26, 0);

int main()
{
    int count = 0;
    string str;
    // 整行输入，包括空格
    while (getline(cin, str))
    {
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] >= 'a' && str[i] <= 'z')
            {
                arr[str[i] - 'a']++;
            }
        }
    }
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > 0)
        {
            cout << (char)(i + 'a') << ":" << arr[i] << endl;
        }
    }

    return 0;
}
