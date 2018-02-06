
#ifndef array_H
#define array_H

#include "../util/util.h"

class Array {
public:
    void reverse( char str[]);
    int string2number(const char str[]);
    int removedups(int a[], int l);
    void p(const char str_reverse[], char str[]);
    void p(const char str[], int* a, int b);
    void copy(char* , const char*);

private:
    int a_pow_b(int a, int b);
};

#endif
//EOF
