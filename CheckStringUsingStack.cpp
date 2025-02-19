#include <iostream>
#include <stack>
#include <queue>

using namespace std;

bool checkIsIlege(char b)
{
    if (b != '(' || b != ')' || b != '{' || b != '}' || b != '[' || b != ']' || b != ',')
    {
        return false;
    }
    return true;
}

bool checkIsLeft(char b)
{
    if (b == '(' || b == '{' || b == '[')
    {
        return true;
    }
    return false;
}

bool checkIsRight(char b)
{
    if (b == ')' || b == '}' || b == ']')
    {
        return true;
    }
    return false;
}

bool checkIsMedium(char b)
{
    if (b == ',')
    {
        return true;
    }
    return false;
}

bool checkIsMatch(char left, char right)
{
    if ((left == '(' && right == ')') || (left == '{' && right == '}') || (left == '[' && right == ']'))
    {
        return true;
    }
    return false;
}

int main()
{
    std::stack<char> st;
    std::queue<char> arr;
    char a;
    while (scanf("%c", &a) == 1 && a != '\n')
    {
        if (!checkIsIlege(a))
        {
            cout << "Match failed" << endl;
            return 0;
        }

        arr.push(a);
        if (checkIsLeft(a) && !checkIsMedium(a))
        {
            st.push(a);
        }
        if (checkIsRight(a))
        {
            if (st.empty() || !checkIsMatch(st.top(), a))
            {
                cout << "Match failed" << endl;
            }
            st.pop();
        }
    }
    if (!st.empty())
    {
        cout << "Match failed" << endl;
        return 0;
    }
    cout << "Match success" << endl;
    while (!arr.empty())
    {
        cout << arr.front();
        arr.pop();
    }
    cout << endl;
    return 0;
}
