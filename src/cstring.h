#ifndef CSTRING_H
#define CSTRING_H

#include <stddef.h>

typedef struct CString
{
    char* raw_string;
    size_t length;
} CString;
 
CString* cstring_new(const char* str);

//TODO: declare and define the rest of the specified functions

#endif //CSTRING_H