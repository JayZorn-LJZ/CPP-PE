#include <iostream>
#include "golf.h"

int main(void)
{
    golf my_golf{};
    int temp;

    std::cout << "请输入信息，直接回车则退出" << std::endl;
    while (temp = setgolf(my_golf))
    {
        showgolf(my_golf);
        std::cout << "请输入信息，直接回车则退出" << std::endl;
    }

    return 0;
}