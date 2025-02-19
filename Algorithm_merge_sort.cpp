#include <iostream>

using namespace std;

const int N = 1e6 + 10;
int p[] = {3, 2, 2423, 21, 21, 43, 13243, 321, 1, 2}, n;
int tmp[N];

void merge_sort(int l, int r)
{
    if (l >= r)
    {
        return;
    }
    int mid = (l + r) >> 1;
    merge_sort(l, mid);
    merge_sort(mid + 1, r);
    int k = 0, i = l, j = mid + 1;
    while (i <= mid && j <= r)
    {
        if (p[i] <= p[j])
        {
            tmp[k++] = p[i++];
        }
        else
        {
            tmp[k++] = p[j++];
        }
    }
    while (i <= mid)
    {
        tmp[k++] = p[i++];
    }
    while (j <= r)
    {
        tmp[k++] = p[j++];
    }
    for (i = l, j = 0; i <= r; i++, j++)
    {
        p[i] = tmp[j];
    }
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
    n = sizeof(p) / sizeof(p[0]);
    // cout << n;
    // n = 10;
    merge_sort(0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << p[i] << " ";
    }
    return 0;
}
