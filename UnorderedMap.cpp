#include <iostream>
#include <unordered_map>

int main()
{
    std::unordered_map<std::string, int> hashTable;

    // 插入键值对
    hashTable["apple"] = 1;
    hashTable["banana"] = 2;
    hashTable["cherry"] = 3;

    // 查找键值对
    if (hashTable.find("banana") != hashTable.end())
    {
        std::cout << "banana的值是：" << hashTable["banana"] << std::endl;
    }
    else
    {
        std::cout << "未找到banana" << std::endl;
    }

    // 遍历散列表
    for (const auto &pair : hashTable)
    {
        std::cout << pair.first << "：" << pair.second << std::endl;
    }

    return 0;
}
