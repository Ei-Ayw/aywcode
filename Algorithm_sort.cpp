#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

struct Student
{
    std::string name;
    int age;
    Student() {}
    Student(std::string n, int a) : name(n), age(a) {}
};

bool compareStruct(Student a, Student b)
{
    return a.age < b.age;
}

bool compare(int a, int b)
{
    return a > b; // 重载sort排序规则，改为降序排序
}

/**
 * sort 可以对数字、字母（默认按字典序排序）、结构体（需要重载compare方法）进行排序
 */
int main()
{
    std::vector<int> arr = {4, 2, 5, 1, 3, 6, 324, 213, 124};
    std::sort(arr.begin(), arr.end());
    cout << "Natural sort: ";
    for (int a : arr)
    {
        cout << a << ' ';
    }
    cout << endl;

    std::vector<int> brr = {6, 324, 213, 124};
    std::sort(brr.begin(), brr.end(), compare);
    cout << "Change rule sort: ";
    for (int b : brr)
    {
        cout << b << ' ';
    }
    cout << endl;

    Student stu[3];
    stu[0] = Student("L", 10);
    stu[1] = Student("S", 23);
    stu[2] = Student("E", 15);
    std::sort(stu, stu + 3, compareStruct);
    for (int i = 0; i < 3; i++)
    {
        cout << stu[i].name << " " << stu[i].age << endl;
    }
    return 0;
}
