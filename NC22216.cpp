#include <iostream>
#include <cmath>
#include <algorithm>
#include <stack>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int num;
        stack<int> st;
        int a;
        cin >> num;
        while (num--)
        {
            cin >> a;
            st.push(a);
        }
        while (!st.empty())
        {
            cout << st.top() << " ";
            st.pop();
        }
        cout << endl;
    }
    return 0;
}
