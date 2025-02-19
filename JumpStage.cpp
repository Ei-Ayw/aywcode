#include <iostream>

using namespace std;

int jumpFloor(int number)
{
    if (number == 0 || number == 1)
    {
        return 1;
    }
    return jumpFloor(number - 1) + jumpFloor(number - 2);
}

int main()
{
    // Total numbers of stages
    int total = 10;
    int methods = jumpFloor(total);
    std::cout << "Total methods: " << methods << std::endl;
}
