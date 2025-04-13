// stock20.h -- augmented version
#ifndef STOCK20_H_
#define STOCK20_H_
#include <string>
#include <iostream>

using std::ostream;

class Stock
{
private:
    // std::string company;
    static int count; // 不是对象的组成部分，只能用单独的语句初始化，不在构造函数内初始化
    char * cy;
    int len;
    int shares;
    double share_val;
    double total_val;
    void set_tot() { total_val = shares * share_val; }
public:
    Stock();        // default constructor
    // Stock(const std::string & co, long n = 0, double pr = 0.0);
    Stock(const char * co, long n, double pr);
    Stock(const Stock &); // 复制构造函数
    Stock & operator=(const Stock &); // 重载赋值运算符函数
    ~Stock();       // do-nothing destructor
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    // void show()const;
    const Stock & topval(const Stock & s) const;
    friend ostream & operator<<(ostream &, const Stock &);
};

#endif
