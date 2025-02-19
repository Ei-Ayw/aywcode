#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // 创建一个vector并添加一些元素
    vector<int> numbers;
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);
    numbers.push_back(40);
    // 输出vector中的所有元素
    cout << "Initial vector: ";
    for (int num : numbers)
    {
        cout << num << " ";
    }
    cout << endl;
    // 访问vector元素
    cout << "Vector element at index 2: " << numbers[2] << std::endl;
    // 修改vector元素
    numbers[2] = 35;
    // 删除vector中的一个元素
    vector<int>::iterator it = numbers.begin();
    it += 2;
    numbers.erase(it);
    // 输出修改后的vector
    cout << "Vector after deleting an element: ";
    for (int num : numbers)
    {
        std::cout << num << " ";
    }
    std::cout << endl;
    // 添加元素到指定位置（使用迭代器）
    it = numbers.begin();
    it++;
    numbers.insert(it, 25);
    // 输出添加元素后vector
    std::cout << "Vector after adding an element: ";
    for (int num : numbers)
    {
        std::cout << num << " ";
    }
    cout << endl;
    return 0;
}
