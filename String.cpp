#include <iostream>
#include <string>

int main()
{
    // 定义并初始化一个string
    std::string str = "Hello World!";

    // 访问string元素
    std::cout << "string的第一个字符：" << str[0] << std::endl;

    // 修改string元素
    str[7] = 'J';
    std::cout << "修改后的string" << str << std::endl;

    // 拼接字符串
    std::string anotherStr = "Have a nice day!";
    str += anotherStr;
    std::cout << "拼接后的string：" << str << std::endl;

    /**
     * size_t 是 C++ 标准库中定义的一种无符号整数类型，
     * 通常用于表示对象的大小或数组的索引。
     * 在 std::string::find 函数中，返回值类型为 size_t，
     * 表示子字符串在原字符串中的位置。
     *
     * size_t pos = str.find("World");
     * 如果找到了指定的子字符串，find 函数返回该子字符串
     * 在原字符串中第一次出现的起始位置（索引，从 0 开始计数），
     * 类型为 size_t。如果没有找到指定的子字符串，find 函数返回 std::string::npos。
     */
    // 查找字符串
    size_t pos = str.find("World");
    if (pos != std::string::npos)
    {
        std::cout << "找到子字符串'World'，位置：" << pos << std::endl;
    }
    else
    {
        std::cout << "未找到子字符串 'World'" << std::endl;
    }
    return 0;
}
