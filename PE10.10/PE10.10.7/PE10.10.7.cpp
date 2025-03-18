#include <iostream>
#include "bp.h"

int main(void)
{
    using namespace std;

    BP bp1 {"Phil", 10};
    cout << "bp1:" << endl;
    bp1.report();
    cout << endl;

    cout << "reset bp1:" << endl;
    bp1.setci(90);
    bp1.report();

    cout << endl;

    BP bp2 {};
    cout << "bp2:" << endl;
    bp2.report();
    cout << endl;

    cout << "reset bp2:" << endl;
    bp2.setci(90);
    bp2.report();

    return 0;
}