#include <iostream>
#include <stack>

using namespace std;

int main()
{
    std::stack<int> st;

    // 入栈操作
    for (int i = 0; i < 10; i++)
    {
        st.push(i);
    }

    // 查看栈顶元素
    std::cout << "栈顶元素：" << st.top() << std::endl;

    std::cout << st.size() << std::endl;

    // 出栈操作
    st.pop();
    std::cout << "出栈后元素：" << st.top() << std::endl;

    // 检查栈是否为空
    if (st.empty())
    {
        std::cout << "栈为空" << endl;
    }
    else
    {
        std::cout << "栈不为空，栈的大小" << st.size() << std::endl;
    }
    return 0;
}
