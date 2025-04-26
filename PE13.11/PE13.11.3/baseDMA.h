#include <iostream>
#include "ABCDMA.h"

class baseDMA : public ABCDMA
{
private:
    char * color;

public:
    baseDMA(const char * c = "blank", const char * l = "null",
            int r = 0);
    // baseDMA(const char * c, const ABCDMA & rs); // 不能定义此方法。因为无法创建ABC实例
    baseDMA(const baseDMA &);
    baseDMA & operator=(const baseDMA &);
    void ViewAcct() const override;
    
};