#ifndef __GOLF_H__
#define __GOLF_H__

const int Len = 40;
struct golf
{
    char fullname[Len];
    int handicap;
};

void string_clear(char *);
void setgolf(golf &, const char *, int);
int setgolf(golf &);
void handicap(golf &, int);
void showgolf(const golf &);

#endif