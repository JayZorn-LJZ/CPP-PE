#include <iostream>
#include "Cd.hpp"

int main(void)
{
    Cd c1("Beatles", "Capitol", 14, 35.5);
    c1.Report();
    Cd c2;
    c2.Report();

    return 0;
}