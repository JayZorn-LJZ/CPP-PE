// stock20.cpp -- augmented version
#include <iostream>
#include <cstring>
#include "stock20.h"
using namespace std;

int Stock::count = 0; // 不带static

// constructors
Stock::Stock()       // default constructor
{
    count++;
    len = 0;
    shares = 0;
    share_val = 0.0;
    total_val = 0.0;
}

// Stock::Stock(const std::string & co, long n, double pr)
// {
//     company = co; // 赋值
//     if (n < 0)
//     {
//         std::cout << "Number of shares can't be negative; "
//                    << company << " shares set to 0.\n";
//         shares = 0;
//     }
//     else
//         shares = n;
//     share_val = pr;
//     set_tot();
// }

Stock::Stock(const char * co, long n, double pr)
{
    // 初始化函数

    count++;
    len = strlen(co);
    cy = new char[len + 1];

    strncpy(cy, co, len);
    cy[len] = '\0';
    if (n < 0)
    {
        std::cout << "Number of shares can't be negative; "
                   << co << " shares set to 0.\n";
        shares = 0;
    }
    else
        shares = n;
    share_val = pr;
    set_tot();
}

Stock::Stock(const Stock & sk)
{
    // 将对象初始化为对象时调用

    count++;
    len = sk.len;

    cy = new char[len + 1];
    strncpy(cy, sk.cy, len);
    cy[len] = '\0';
    shares = sk.shares;
    share_val = sk.share_val;
    set_tot();
}

Stock & Stock::operator=(const Stock & sk)
{
    // 将对象（作为右值）赋值给已初始化的或未初始化的对象（作为可修改的左值）

    if (len)
    {
        // len为零则未初始化
        len = sk.len;
        cy = new char[len + 1];
        strncpy(cy, sk.cy, len);
        cy[len] = '\0';
        share_val = sk.share_val;
        shares = sk.shares;
        set_tot();
    }
    else
    {
        // len不为零则已初始化

        delete [] cy;
        len = sk.len;
        cy = new char[len + 1];
        strncpy(cy, sk.cy, len);
        cy[len] = '\0';
        share_val = sk.share_val;
        shares = sk.shares;
        set_tot();
    }
    return *this;
}

// class destructor
Stock::~Stock()        // quiet class destructor
{
    count--;
    std::cout << cy << " delete" << endl << "count: " << count << endl;
    delete [] cy;
}

// other methods
void Stock::buy(long num, double price)
{
     if (num < 0)
    {
        std::cout << "Number of shares purchased can't be negative. "
             << "Transaction is aborted.\n";
    }
    else
    {
        shares += num;
        share_val = price;
        set_tot();
    }
}

void Stock::sell(long num, double price)
{
    using std::cout;
    if (num < 0)
    {
        cout << "Number of shares sold can't be negative. "
             << "Transaction is aborted.\n";
    }
    else if (num > shares)
    {
        cout << "You can't sell more than you have! "
             << "Transaction is aborted.\n";
    }
    else
    {
        shares -= num;
        share_val = price;
        set_tot();
    }
}

void Stock::update(double price)
{
    share_val = price;
    set_tot();
}

// void Stock::show() const
// {
//     using std::cout;
//     using std::ios_base;
//     // set format to #.###
//     ios_base::fmtflags orig = 
//         cout.setf(ios_base::fixed, ios_base::floatfield); 
//     std::streamsize prec = cout.precision(3);

//     cout << "Company: " << company
//         << "  Shares: " << shares << '\n';
//     cout << "  Share Price: $" << share_val;
//     // set format to #.##
//     cout.precision(2);
//     cout << "  Total Worth: $" << total_val << '\n';

//     // restore original format
//     cout.setf(orig, ios_base::floatfield);
//     cout.precision(prec);
// }

const Stock & Stock::topval(const Stock & s) const
{
    if (s.total_val > total_val)
        return s;
    else
        return *this; 
}

ostream & operator<<(ostream & os, const Stock & sk)
{
    using std::ios_base;
    // set format to #.###
    ios_base::fmtflags orig = 
        os.setf(ios_base::fixed, ios_base::floatfield); 
    std::streamsize prec = os.precision(3);

    os << "Company: " << sk.cy
        << "  Shares: " << sk.shares << '\n';
    os << "  Share Price: $" << sk.share_val;
    // set format to #.##
    os.precision(2);
    os << "  Total Worth: $" << sk.total_val << '\n';

    // restore original format
    os.setf(orig, ios_base::floatfield);
    os.precision(prec);

    return os;
}