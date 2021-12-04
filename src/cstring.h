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

char cstring_get(size_t index);

void cstring_set(char c, size_t index);


#endif //CSTRING_H