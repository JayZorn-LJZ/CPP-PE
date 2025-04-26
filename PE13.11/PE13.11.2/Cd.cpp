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
    int len;

    len = strlen(s1);
    performers = new char[len + 1];
    strcpy(performers, s1);
    performers[len] = '\0';

    len = strlen(s2);
    label = new char[len + 1];
    strcpy(label, s2);
    label[len] = '\0';

    selections = n;
    playtime = x;
    
    std::cout << "Cd构造函数被调用, performers: " << performers << std::endl;
}

Cd::Cd(const Cd & d)
{
    using std::cout, std::endl;

    int len;

    len = strlen(d.performers);
    performers = new char[len + 1];
    strcpy(performers, d.performers);
    performers[len] = '\0';

    len = strlen(d.label);
    label = new char[len + 1];
    strcpy(label, d.label);
    label[len] = '\0';

    selections = d.selections;
    playtime = d.playtime;
    cout << "Cd复制构造函数被调用, performers: " << performers << endl;
}

Cd::Cd()
{
    using std::cout, std::endl;

    performers = new char[1];
    label = new char[1];

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
    
    delete performers;
    delete label;
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
    int len;

    delete performers;
    delete label;

    len = strlen(d.performers);
    performers = new char[len + 1];
    strcpy(performers, d.performers);
    performers[len] = '\0';

    len = strlen(d.label);
    label = new char[len + 1];
    strcpy(label, d.label);
    label[len] = '\0';

    selections = d.selections;
    playtime = d.playtime;

    return d;
}

// 结束 Cd public 方法定义

// Classic public 方法定义

Classic::Classic() : Cd()
{
    work = new char[1];
    *work = '\0';
}

Classic::Classic(
    const char * s1, 
    const char * s2, 
    const char * s3, 
    int n, double x
) : Cd(s2, s3, n, x)
{
    using std::cout, std::endl;
    int len = strlen(s1);

    work = new char[len + 1];
    strncpy(work, s1, len);
    work[len] = '\0';
    cout << "work: " << work << endl;
}

Classic::Classic(const char * s1, const Cd & d) : Cd(d)
{
    int len = strlen(s1);

    work = new char[len + 1];
    strncpy(work, s1, len);
    work[len] = '\0';
}

Classic::Classic(const Classic & c) : Cd(c)
{
    using std::cout, std::endl;
    int len = strlen(c.work);

    work = new char[len + 1];
    strncpy(work, c.work, len);

    cout << "Classic复制构造函数被调用, performers: " << Cd::perfms() << endl; // ToDo: 输出加上performers
}

Classic::~Classic()
{
    using std::cout, std::endl;

    cout << "Classic默认析构函数被调用, performers: " << Cd::perfms() << endl;
    delete work;
}

void Classic::Report() const
{
    Cd::Report();

    std::cout << "work: " << work << std::endl;
}

// 结束 Classic public 方法定义