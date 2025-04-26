#include <iostream>
#include "baseDMA.h"
#include "ABCDMA.h"

int main(void)
{
    baseDMA b1;
    baseDMA b2("yellow", "python", 10);
    baseDMA b3 = b2;
    ABCDMA * a_array[3] {&b1, &b2, &b3};

    for (int i = 0; i < 3; i++)
        a_array[i]->ViewAcct();

    return 0;
}