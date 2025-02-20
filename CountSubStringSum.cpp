#include <iostream>
#include <string>

using namespace std;

int countSubString(const std::string &str, const std::string &subStr)
{
    int count = 0;
    /**
     * size_t 是 C++ 中的一种无符号整数类型，
     * 通常用于表示数组的索引、字符串的长度等。
     * 这里定义了一个变量 pos 并初始化为 0，
     * pos 用于记录在字符串 str 中查找子串 subStr 的起始位置，
     * 初始时从字符串的开头（索引为 0 的位置）开始查找
     */
    size_t pos = 0;
    /**
     * str.find(subStr, pos) 是 std::string 类的成员函数，
     * 用于在字符串 str 中从位置 pos 开始查找子串 subStr。
     * 如果找到了子串，该函数会返回子串在字符串中首次出现的位置索引；
     * 如果没有找到，则返回 std::string::npos，std::string::npos
     */
    while ((pos = str.find(subStr, pos)) != std::string::npos)
    {
        ++count;
        /**
         * 移动索引游标
         */
        pos += subStr.length();
    }
    return count;
}

int main()
{
    int n = 121212;
    std::string str = std::to_string(n);
    int tempSum = countSubString(str, "12");
    std::cout << "字符串中指定字符串出现的次数为：" << tempSum << endl;
    return 0;
}
