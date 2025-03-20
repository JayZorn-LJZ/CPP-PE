#include <iostream>
#include "list.h"

void show(int &);

int main(void)
{
    List my_l(10);

    for (int i = 0; i < 1100; i++)
    {
        my_l.add(i);
    }
    std::cout << "my_l 的 所有内容:" << std::endl;
    my_l.operate(show);
    std::cout << "my_l 成员数:" << my_l.list_members() << std::endl;
    std::cout << "is_full:" << my_l.isfull() << std::endl;
    std::cout << "is_empty:" << my_l.isempty() << std::endl;
    
    std::cin.get();

    return 0;
}

void show(int & n)
{
    std::cout << n << std::endl;
}