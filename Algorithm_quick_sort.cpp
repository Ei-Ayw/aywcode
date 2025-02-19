#include <iostream>

using namespace std;

const int N = 1e6 + 10;
int q[] = {3, 2, 2423, 21, 21, 43, 13243, 321, 1, 2}, n;

void quick_sort(int left, int right)
{
    if (left >= right)
    {
        return;
    }
    int base = q[(left + right) >> 1];
    int i = left - 1, j = right + 1; // 定义双指针
    while (i < j)
    {
        do
            i++;
        while (q[i] < base); // 从左到右遍历，到q[i]>=base的地方就跳出
        do
            j--;
        while (q[j] > base); // 从右到左遍历，到q[i]<=base的地方就跳出
        if (i < j)
            swap(q[i], q[j]);
    }
    quick_sort(left, j);
    quick_sort(j + 1, right);
}

int main()
{
    /**
     * 普通数组并没有 length() 成员函数。如果你想要获取数组的长度，
     * 由于数组在编译时大小就已确定，对于固定大小的数组，
     * 你可以根据初始化时的元素个数来确定，或者使用一些技巧，
     * 例如 sizeof(q) / sizeof(q[0]) 来计算数组元素的数量。
     *
     * n = sizeof(q) / sizeof(q[0]);
     * sizeof(q) 返回整个数组 q 所占用的字节数。
     * sizeof(q[0]) 返回数组 q 中单个元素所占用的字节数。
     * 通过将整个数组的字节数除以单个元素的字节数，
     * 就可以得到数组中元素的个数，也就是数组的长度。
     */
    n = sizeof(q) / sizeof(q[0]);
    // cout << n;
    // n = 10;
    quick_sort(0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << q[i] << " ";
    }
    return 0;
}
