#include <iostream>

using namespace std;

int Letters;
int Digits;
int Others;

void countSum(char a)
{
    if (a == '?')
    {
        return;
    }
    if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
    {
        Letters++;
        return;
    }
    if (a >= '0' && a <= '9')
    {
        Digits++;
        return;
    }
    Others++;
    return;
}

int main()
{
    char a = '1';
    while (a != '?')
    {
        // 使用 cin.get() 读取包括空格在内的所有字符
        a = cin.get();
        countSum(a);
    }
    cout << "Letters=" << Letters << endl;
    cout << "Digits=" << Digits << endl;
    cout << "Others=" << Others << endl;
    return 0;
}
