// randwalk.cpp -- using the Vector class
// compile with the vect.cpp file
#include <iostream>
#include <cstdlib>      // rand(), srand() prototypes
#include <ctime>        // time() prototype
#include <fstream>
#include "vect.h"
int main()
{
    using namespace std;
    using VECTOR::Vector;
    srand(time(0));     // seed random-number generator
    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0;
    double target;
    double dstep;
    ofstream outfile; // 文件对象

    cout << "Enter target distance (q to quit): ";
    while (cin >> target)
    {
        outfile.open("test.txt"); // 重新打开以实现覆写
        cout << "Enter step length: ";
        if (!(cin >> dstep))
            break;

        outfile << "Target Distance: " << target << ", Step Size: " << dstep << endl;
        outfile << "0: (x,y) = (0, 0)" << endl; // 输出第零步
        while (result.magval() < target)
        {
            direction = rand() % 360;
            step.reset(dstep, direction, Vector::POL);
            result = result + step;
            outfile << steps + 1 << ": " << result << endl; // 输出具体步信息
            steps++;
        }
        outfile << "After " << steps << " steps, the subject "
            "has the following location:\n";
        outfile << result << endl;
        result.polar_mode();
        outfile << " or\n" << result << endl;
        outfile << "Average outward distance per step = "
            << result.magval()/steps << endl;
        steps = 0;
        result.reset(0.0, 0.0);
        cout << "Enter target distance (q to quit): ";
        outfile.close();
    }
    cout << "Bye!\n";
/* keep window open
    cin.clear();
    while (cin.get() != '\n')
        continue;
    cin.get();
*/
    return 0; 
}