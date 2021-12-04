#include <assert.h>
#include <string.h>
#include <stdlib.h>

#include "cstring.h"

void cstring_new_should_correctly_initialize_cstring() {
    CString* string = cstring_new("xyz");
    assert(string != NULL);
    assert(string->raw_string != NULL);
    assert(strcmp(string->raw_string, "xyz") == 0);
    assert(string->length == 3);

    free(string);
}

void run_all_tests() {
    cstring_new_should_correctly_initialize_cstring();
}