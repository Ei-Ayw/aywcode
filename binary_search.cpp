#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int N = 1e6 + 10;

int binary_search(vector<int> &arr, int target)
{
    int i = 0, j = arr.size() - 1;
    while (i <= j)
    {
        int m = i + (j - i) / 2;
        if (arr[m] < target)
        {
            i = m + 1;
        }
        else if (arr[m] > target)
        {
            j = m - 1;
        }
        else
        {
            return m;
        }
    }
    // 未找到元素，返回 -1
    return -1;
}

int main()
{
    vector<int> p = {23, 1, 423, 2, 22, 12};
    std::sort(p.begin(), p.end());
    int target = 22;
    int index = binary_search(p, target);
    cout << "The index of search target is: " << index << endl;
    return 0;
}
