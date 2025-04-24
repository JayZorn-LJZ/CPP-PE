#include <iostream>
#include <cstring>
#include "Cd.hpp"

// Cd protected 方法定义：

const char * Cd::perfms() const
{
    return performers;
}

// 结束 Cd protected 方法定义

// Cd public 方法定义：

Cd::Cd(const char * s1, const char *s2, int n, double x)
{
    strcpy(performers, s1);
    strcpy(label, s2);
    selections = n;
    playtime = x;
    
    std::cout << "Cd构造函数被调用, performers: " << performers << std::endl;
}

Cd::Cd(const Cd & d)
{
    using std::cout, std::endl;

    strcpy(performers, d.performers);
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
    cout << "Cd复制构造函数被调用, performers: " << performers << endl;
}

Cd::Cd()
{
    using std::cout, std::endl;

    *performers = '\0';
    *label = '\0';
    selections = 0;
    playtime = .0;
    cout << "Cd默认构造函数被调用, performers: " << performers << endl;
}

Cd::~Cd()
{
    using std::cout, std::endl;
    cout << "Cd默认析构函数被调用, performers: " << performers << endl;
}

void Cd::Report() const
{
    using std::cout, std::endl;

    cout << "performers: " << performers << endl;
    cout << "label: " << label << endl;
    cout << "selections: " << selections << endl;
    cout << "playtime: " << playtime << endl;
}

const Cd & Cd::operator=(const Cd & d)
{
    strcpy(performers, d.performers);
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;

    return d;
}

// 结束 Cd public 方法定义

// Classic public 方法定义

Classic::Classic() : Cd()
{
    ;
}

Classic::Classic(
    const char * s1, 
    const char * s2, 
    const char * s3, 
    int n, double x) : Cd(s2, s3, n, x)
{
    using std::cout, std::endl;

    work = s1;
    cout << "work: " << work << endl;
}

Classic::Classic(const char * s1, const Cd & d) : Cd(d)
{
    work = s1;
}

Classic::Classic(const Classic & c) : Cd(c)
{
    using std::cout, std::endl;
    cout << "Classic复制构造函数被调用, performers: " << Cd::perfms() << endl; // ToDo: 输出加上performers
    work = c.work;
}

Classic::~Classic()
{
    using std::cout, std::endl;
    cout << "Classic默认析构函数被调用, performers: " << Cd::perfms() << endl;
}

void Classic::Report() const
{
    Cd::Report();

    std::cout << "work: " << work << std::endl;
}

// 结束 Classic public 方法定义