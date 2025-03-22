// stone.cpp -- user-defined conversions
// compile with stonewt.cpp
#include <iostream>
using std::cout;
using std::endl;
#include "stonewt.h"
void display(Stonewt st, int n);
int main()
{
    Stonewt incognito = 275; // uses constructor to initialize
    Stonewt wolfe(285.7);    // same as Stonewt wolfe = 285.7;
    Stonewt taft(21, 8);

    cout << "Incognito: " << incognito << endl;
    incognito += 10.0;
    cout << "Incognito+=10.0: " << incognito << endl;
    incognito = incognito + 10.0;
    cout << "Incognito + 10.0: " << incognito << endl;
    incognito = incognito * 10.0;
    cout << "incognito * 10: " << incognito << endl;
    incognito = incognito - 10.0;
    cout << "incognito - 10: " << incognito << endl;
    incognito = -incognito;
    cout << "-incognito: " << incognito << endl;

    return 0;
}