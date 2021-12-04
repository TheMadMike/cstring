#include "cstring.h"
#include <stdlib.h>
#include <string.h>

CString* cstring_new(const char* str) {
    CString* cstr = (CString*) malloc(sizeof(CString));

    size_t length = strlen(str);
    cstr->raw_string = (char*) malloc(sizeof(char) * (length + 1));

    memcpy(cstr->raw_string, str, length + 1);

    cstr->length = length;

    return cstr;
}