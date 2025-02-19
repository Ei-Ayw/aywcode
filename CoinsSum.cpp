#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int coinChange(vector<int> &coins, int target)
{
    // 初始化dp数组，初始值都设为INX_MAX-1，dp[a]=b表示凑成a元最少需要b个硬币
    vector<int> dp(target + 1, INT_MAX - 1);
    // 凑成0元，不需要任何硬币
    dp[0] = 0;

    // 遍历所有硬币金额
    for (int coin : coins)
    {
        // 遍历从该硬币面额到目标面额的所有可能金额
        for (int i = coin; i <= target; i++)
        {
            // 更新dp[i]的值，取较小值
            dp[i] = min(dp[i], dp[i - coin] + 1);
        }
    }

    // 如果dp[target]仍然是初始的大值，说明无法凑成该金额
    if (dp[target] == INT_MAX - 1)
    {
        return -1;
    }
    return dp[target];
}

int main()
{
    vector<int> arr = {1, 5, 10, 20};
    int target = 63;
    int result = coinChange(arr, target);
    if (result == -1)
    {
        cout << "无法凑成该金额" << endl;
        return 0;
    }
    cout << "凑成该金额需要硬币数量：" << endl;
    return 0;
}

// #include <iostream>
// #include <vector>
// #include <climits>

// using namespace std;

// int coinChange(vector<int> &coins, int target)
// {
//     // 初始化dp数组，初始值设为INI_MAX - 1，避免后续加 1 时出现溢出
//     vector<int> dp(target + 1, INT_MAX - 1);
//     // 凑成金额 0 不需要任何硬币
//     dp[0] = 0;

//     // 遍历所有硬币金额
//     for (int coin : coins)
//     {
//         // 遍历从该硬币面额到目标金额的所有可能金额
//         for (int i = coin; i <= target; ++i)
//         {
//             // 更新 dp[i] 的值，取较小值
//             dp[i] = min(dp[i], dp[i - coin] + 1);
//         }
//     }

//     // 如果 dp[target] 仍然是初始的大值，说明无法凑成该金额，返回 -1
//     if (dp[target] == INT_MAX - 1)
//     {
//         return -1;
//     }
//     return dp[target];
// }

// int main()
// {
//     std::vector<int> arr = {1, 5, 10, 20, 50};
//     int target = 63;
//     int result = coinChange(arr, target);
//     cout << "The min number of coins is: " << result << endl;
//     return 0;
// }
