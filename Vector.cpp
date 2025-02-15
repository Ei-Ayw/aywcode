#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void printElement(int element)
{
    std::cout << element << " ";
}

int main()
{
    // 定义初始化vector
    std::vector<int> vec = {1, 2, 3, 4, 5};

    // 访问vector元素
    std::cout << "第一个元素" << vec[0] << endl;

    // 修改元素
    vec[2] = 10;
    std::cout << "修改后的第三个元素" << vec[2] << endl;

    // 动态添加元素
    vec.push_back(6);

    // 遍历vector
    // 传统for方法
    for (int i = 0; i < vec.size(); i++)
    {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;

    // 使用迭代器遍历
    for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // 范围for
    for (int element : vec)
    {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    // for_each遍历
    std::for_each(vec.begin(), vec.end(), printElement);
    std::cout << std::endl;

    // for_each使用lambda表达式简化
    std::for_each(vec.begin(), vec.end(), [](int element)
                  { std::cout << element << " "; });

    return 0;
}
