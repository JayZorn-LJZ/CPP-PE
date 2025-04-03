#include <iostream>
#include "cow.h"

int main(void)
{
    using std::cout;
    using std::cin;
    using std::endl;

    // 1. 常规初始化
    Cow cow1("Phil", "basketball", 56);
    // 2. 列表初始化
    Cow cow2 = {"Amy", "piano", 45};
    // 3. 默认初始化
    // 4. 使用cow赋值cow
    // 5. 使用cow对象初始化cow对象
}