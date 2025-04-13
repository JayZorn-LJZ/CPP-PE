// string1.cpp -- String class methods
#include <cstring>                 // string.h for some
#include <cctype>
#include "string2.h"               // includes <iostream>
using std::cin;
using std::cout;

// initializing static class member

int String::num_strings = 0;

// static method
int String::HowMany()
{
    return num_strings;
}

// class methods
String::String(const char * s)     // construct String from C string
{
    len = std::strlen(s);          // set size
    str = new char[len + 1];       // allot storage
    std::strcpy(str, s);           // initialize pointer
    num_strings++;                 // set object count
}

String::String()                   // default constructor
{
    len = 4;
    str = new char[1];
    str[0] = '\0';                 // default string
    num_strings++;
}

String::String(const String & st)
{
    num_strings++;             // handle static member update
    len = st.len;              // same length
    str = new char [len + 1];  // allot space
    std::strcpy(str, st.str);  // copy string to new location
}

String::~String()                     // necessary destructor
{
    --num_strings;                    // required
    delete [] str;                    // required
}

String & String::stringlow()
{
    for (int i = 0; i < len; i++)
        str[i] = tolower(str[i]);
    return *this;
}

String & String::stringup()
{
    for (int i = 0; i < len; i++)
        str[i] = toupper(str[i]);
    return *this;
}

int String::has(char c)
{
    int count = 0;
    for (int i = 0; i < len; i++)
        if (str[i] == c)
            count++;
    return count;
}

// overloaded operator methods    

    // assign a String to a String
String & String::operator=(const String & st)
{
    if (this == &st)
        return *this;
    delete [] str;
    len = st.len;
    str = new char[len + 1];
    std::strcpy(str, st.str);
    return *this;
}

    // assign a C string to a String
String & String::operator=(const char * s)
{
    delete [] str;
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s);
    return *this;
}

String String::operator+(const String & st) const
{
    int temp_len = len + st.len;
    char * new_str = new char[temp_len + 1];

    for (int i = 0; i < len; i++)
        *(new_str + i) = *(str + i);
    for (int i = len; i < temp_len; i++)
        *(new_str + i) = *(st.str + i - len);
    new_str[temp_len] = '\0';
    return String(new_str);
}

String String::operator+(const char * s) const
{
    int s_len = strlen(s);
    int total_len = len + s_len;
    char * new_str = new char[total_len + 1];

    strncpy(new_str, str, len);
    for (int i = len; i < total_len; i++)
        *(new_str + len) = *(s + i - len);
    new_str[total_len] = '\0';
    return String(new_str);
}

    // read-write char access for non-const String
char & String::operator[](int i)
{
    return str[i];
}

    // read-only char access for const String
const char & String::operator[](int i) const
{
    return str[i];
}

// overloaded operator friends

String operator+(const char * s, const String & st)
{
    int s_len = strlen(s);
    int total_len = s_len + st.len;
    char * new_str = new char[total_len + 1];

    strncpy(new_str, s, s_len);
    for (int i = s_len; i < total_len; i++)
        *(new_str + i) = *(st.str + i - s_len);
    new_str[total_len] = '\0';
    return String(new_str);
}

bool operator<(const String &st1, const String &st2)
{
    return (std::strcmp(st1.str, st2.str) < 0);
}

bool operator>(const String &st1, const String &st2)
{
    return st2 < st1;
}

bool operator==(const String &st1, const String &st2)
{
    return (std::strcmp(st1.str, st2.str) == 0);
}

    // simple String output
ostream & operator<<(ostream & os, const String & st)
{
    os << st.str;
    return os; 
}

    // quick and dirty String input
istream & operator>>(istream & is, String & st)
{
    char temp[String::CINLIM];
    is.get(temp, String::CINLIM);
    if (is)
        st = temp;
    while (is && is.get() != '\n')
        continue;
    return is; 
}

