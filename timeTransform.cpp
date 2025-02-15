#include <iostream>
#include <ctime>

int main()
{
    // 获取当前时间
    time_t now = time(NULL);

    // 将当前时间转换为本地时间
    struct tm *local_tm = localtime(&now);

    // 使用strftime格式化时间
    char buffer[80];
    strftime(buffer, 80, "%Y-%m-%d %H:%M:%S", local_tm);

    // 输出当前时间
    std::cout << "Current local time: " << buffer << std::endl;

    // 将当前时间转换为UTC时间
    struct tm *utc_tm = gmtime(&now);

    // 格式化UTC时间
    strftime(buffer, 80, "%Y-%m-%d %H:%M:%S", utc_tm);

    // 输出UTC时间
    std::cout << "Current UTC time: " << buffer << std::endl;

    return 0;
}
