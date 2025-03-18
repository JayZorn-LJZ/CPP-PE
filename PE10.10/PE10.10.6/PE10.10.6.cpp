#include <iostream>
#include "move.h"

int main(void)
{
    using std::cout;
    using std::endl;

    Move m1{90, 10.50};
    cout << "M1:" << endl;
    m1.showmove();
    cout << "reset M1:" << endl;
    m1.reset(78.3, 39.0);
    m1.showmove();

    Move m2{12, 929};
    cout << "M2:" << endl;
    m2.showmove();
    cout << "reset M2:" << endl;
    m2.reset(765.3, 39.543);
    m2.showmove();

    return 0;
}