#include <iostream>

using namespace std;

struct LinkedNode
{
    int val;
    LinkedNode *next;
    LinkedNode(int x) : val(x), next(nullptr) {}
};

int main()
{
    LinkedNode *head = new LinkedNode(1);
    LinkedNode *second = new LinkedNode(2);
    LinkedNode *third = new LinkedNode(3);

    // 连接节点
    head->next = second;
    second->next = third;

    // 遍历链表
    LinkedNode *current = head;
    while (current != nullptr)
    {
        cout << current->val << " ";
        current = current->next;
    }
    cout << endl;

    // 释放链表内存
    current = head;
    while (current != nullptr)
    {
        LinkedNode *temp = current;
        current = current->next;
        delete temp;
    }
    return 0;
}
