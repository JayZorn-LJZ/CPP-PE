#ifndef ABCDMA_H_
#define ABCDMA_H_
#include <iostream>

class ABCDMA
{
private:
    char * label;
    int rating;

public:
    ABCDMA();
    ABCDMA(const ABCDMA &);
    ABCDMA(const char *, int);
    virtual ~ABCDMA();
    virtual ABCDMA & operator=(const ABCDMA &); // 有必要定义，因为作为派生类的成员时，对派生类之间的赋值操作需要使用此方法进行深度赋值
    // friend std::ostream & operator<<(std::ostream &, const ABCDMA & ); // 本版本弃用，使用ViawAcct
    virtual void ViewAcct() const = 0;
    const char * ABCDMA_label() const;
    int ABCDMA_rating() const;
    
};

#endif