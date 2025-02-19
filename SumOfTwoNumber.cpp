#include <iostream>
#include <unordered_map>
#include <vector>

int main()
{
    std::unordered_map<int, int> numsCount;
    // 给定一个整数数组和一个目标值
    std::vector<int> arr = {1, 2, 5, 6, 32, 54, 23, 12, 53, 64};
    int target = 14;
    for (int num : arr)
    {
        numsCount[num] = 1;
    }
    // for (const auto &pair : numsCount)
    // {
    //     std::cout << pair.first << " " << pair.second << std::endl;
    // }
    for (const auto &pair : numsCount)
    {
        if (numsCount[target - pair.first] == 1)
        {
            std::cout << target << "=" << pair.first << "+" << target - pair.first;
            break;
        }
    }
    return 0;
}
