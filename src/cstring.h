#ifndef CSTRING_H
#define CSTRING_H

#include <stddef.h>

typedef struct CString
{
    char* raw_string;
    size_t length;
} CString;
 
CString* cstring_new(const char* str);

// returns raw string copy
char* cstring_raw(CString* string);



#endif //CSTRING_H