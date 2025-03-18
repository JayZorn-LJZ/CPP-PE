#include <iostream>
#include "move.h"

Move::Move(double a, double b)
{
    x = a;
    y = b;
}

void Move::showmove() const
{
    std::cout << "x:" << x << std::endl;
    std::cout << "y:" << y << std::endl;
}

Move Move::add(const Move & m) const
{
    Move new_m {};

    new_m.x = m.x;
    new_m.y = m.y;
    
    return new_m;
}

void Move::reset(double a, double b)
{
    x = a;
    y = b;
}