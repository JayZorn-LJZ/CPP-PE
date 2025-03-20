#ifndef LIST_H__
#define LIST_H__


class List
{
private:
    int members;
    int end;
    int * array;
public:
    List();
    List(int);
    ~List();
    void add(int);
    bool isfull() const;
    bool isempty() const;
    void operate(void (*func)(int &));
    int list_members();
};

#endif