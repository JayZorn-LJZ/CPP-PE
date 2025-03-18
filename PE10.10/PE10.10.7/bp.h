#ifndef BP_H__
#define BP_H__

class BP
{
private:
    static const int NameSize = 19;
    char fullname[NameSize] {};
    int ci {};
public:
    BP(const char fn[NameSize] = "Plorga", int ci = 50);
    void setci(int);
    void report() const;
};

#endif