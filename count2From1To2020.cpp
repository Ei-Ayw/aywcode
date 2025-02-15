#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int count = 0;
    for (int i = 1; i <= 2020; i++)
    {
        string tmpStr = to_string(i);
        count += std::count(tmpStr.begin(), tmpStr.end(), '2'); // 统计字符串中特定字符的出现次数
    }
    cout << "The total nums of 2 from 1 to 2020 are " << count << endl;
}
