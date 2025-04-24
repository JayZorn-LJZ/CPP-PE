#ifndef CD_H
#define CD_H
#include <iostream>

class Cd
{
private:
    char performers[50];
    char label[20];
    int selections;
    double playtime;
protected:
    const char * perfms() const;
public:
    Cd(const char * s1, const char *s2, int n, double x);
    Cd(const Cd & d);
    Cd();
    virtual ~Cd(); // 必要性：当使用派生类初始化基类指针或引用，没有定义虚析构函数时，删除基类指针或引用将不会调用派生类的析构函数
    virtual void Report() const; 
    const Cd & operator=(const Cd & d);
};

class Classic : public Cd
{
private:
    std::string work;
public:
    Classic();
    Classic(const char *, const char *, const char *, int, double);
    Classic(const char *, const Cd &);
    Classic(const Classic &);
    ~Classic();
    virtual void Report() const override;
};

#endif