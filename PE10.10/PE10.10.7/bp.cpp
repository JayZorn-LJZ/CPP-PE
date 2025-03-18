#include <iostream>
#include <cstring>
#include "bp.h"

BP::BP(const char fn[NameSize], int user_ci)
{
    strncpy(fullname, fn, NameSize);
    ci = user_ci;
}

void BP::setci(int user_ci)
{
    ci = user_ci;
}

void BP::report() const
{
    using std::cout, std::endl;
    
    cout << "Name:" << fullname << endl;
    cout << "CI:" << ci << endl;
}