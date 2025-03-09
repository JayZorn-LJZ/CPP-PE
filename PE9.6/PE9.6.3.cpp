#include <iostream>
#include <string.h>

const int Len =  20;

struct chaff
{
    char dross[20];
    int slag;
};

int main(void)
{
    using std::cin;
    using std::cout;
    using std::endl;
    using std::string;

    char str1[Len] = "Hello world";
    char str2[Len] = "Hello c++";
    chaff * buffer = new chaff[2] {};
    chaff * cf = new(buffer) chaff[2] {};

    strncpy(cf[0].dross, str1, Len);
    strncpy(cf[1].dross, str2, Len);
    cf[0].slag = 10;
    cf[1].slag = 20;
    for (int i = 0; i < 2; i++)
    {
        cout << "cf" << i << "." << "dross: " << cf[i].dross << endl;
        cout << "cf" << i << "." << "slag: " << cf[i].slag << endl;
    }

    return 0;
}