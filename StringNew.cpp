#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str = "Hello, C++";
    // 使用push_back()在字符串末尾添加字符
    str.push_back('!');
    cout << "After push_back: " << str << std::endl;
    // 使用pop_back()移除字符串末尾的字符
    str.pop_back();
    cout << "After pop_back: " << str << std::endl;
    // 使用insert()在指定位置插入字符串
    str.insert(7, "world, ");
    cout << "After insert: " << str << std::endl;
    // 使用+号拼接字符串
    str = str + "Welcome to  programming.";
    cout << "After + operator" << str << std::endl;
    // 获取并打印字符串的大小
    cout << "Size: " << str.size() << std::endl;
    return 0;
}
