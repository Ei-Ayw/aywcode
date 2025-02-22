#include <iostream>
#include <string>

using namespace std;

int n;
int sum;   // 全部票数
int count; // 有效票数
int score[4];
char person[3] = {'A', 'B', 'C'};

int main()
{
    while (n != -1)
    {
        cin >> n;
        if (n != 1 && n != 2 && n != 3)
        {
            continue;
            sum++;
        }
        score[n]++;
        count++;
    }

    // 打印投票信息
    cout << "A=" << score[1] << endl;
    cout << "B=" << score[2] << endl;
    cout << "C=" << score[3] << endl;
    cout << "Tot=" << count << endl;

    // 计算村长人选
    for (int i = 1; i <= 3; i++)
    {
        if (score[i] > (sum + 1) / 2)
        {
            cout << "score[i]" << score[i] << "(sum + 1) / 2" << (sum + 1) / 2;
            cout << person[i - 1] << "-yes" << endl;
            return 0;
        }
    }
    cout << "all-NO" << endl;
    return 0;
}
