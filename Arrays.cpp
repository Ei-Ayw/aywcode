#include <iostream>

using namespace std;

int main()
{
    int str[] = {1, 2, 3, 4, 5};

    // 访问数组元素
    std::cout << "数组的第一个元素" << str[0] << endl;

    // 修改数组元素
    str[2] = 6;

    // 访问数组元素
    std::cout << "数组的第一个元素" << str[2] << endl;

    // 遍历输出各元素
    for (int i = 0; i < 5; i++)
    {
        cout << str[i] << endl;
    }

    return 0;
}