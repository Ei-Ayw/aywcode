#include <iostream>
#include <queue>

using namespace std;

int main()
{
    std::queue<int> q;

    // 入队操作
    for (int i = 0; i < 10; i++)
    {
        q.push(i);
    }

    // 查看队首元素
    std::cout << "队首元素：" << q.front() << endl;

    // 出队操作
    q.pop();
    std::cout << "出队后队首元素：" << q.front() << std::endl;

    // 检查队列是否为空
    if (q.empty())
    {
        std::cout << "队列为空" << std::endl;
    }
    else
    {
        std::cout << "队列为空，队列的大小" << std::endl;
    }
    return 0;
}
