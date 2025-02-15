#include <iostream>
#include <ctime>

using namespace std;

/**
 * 从 1949 年开始到2012年逐年检查每年的 10 月 1 日是星期几，统计其中是星期日的年份数量
 */
int main()
{
    int count = 0;
    for (int year = 1949; year <= 2012; year++)
    {
        tm timeInfo = {};
        timeInfo.tm_year = year - 1900; // 离1900的年份数
        timeInfo.tm_mon = 9;            // 范围是0~11
        timeInfo.tm_mday = 1;           // 1号

        // 将tm结构体转为time_t类型
        time_t time = mktime(&timeInfo);

        // 将time_t类型转回tm
        tm *localTime = localtime(&time);

        // 检查这一天是否是星期日（tm_wday中0表示星期天）
        if (localTime->tm_wday == 0)
        {
            ++count;
        }
    }
    cout << "一共有几天星期日：" << count << endl;
    return 0;
}
