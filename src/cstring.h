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

// returns null character if index >= string->length
char cstring_get(CString* string, size_t index);

void cstring_set(CString* string, char c, size_t index);


#endif //CSTRING_H