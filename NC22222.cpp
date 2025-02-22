#include <iostream>
#include <unordered_map>

int main()
{
    int n;
    std::cin >> n;

    // hashmap 可以应对数组f[1e9+10]过大的情况
    std::unordered_map<int, int> count;
    int num;
    for (int i = 0; i < n; ++i)
    {
        std::cin >> num;
        // 统计每个元素的出现次数
        count[num]++;
    }

    int index = 0;
    for (const auto &pair : count)
    {
        if (pair.second > n / 2)
        {
            index = pair.first;
            break; // 找到后立即终止循环
        }
    }

    std::cout << index << std::endl;
    return 0;
}
