#include <assert.h>
#include <string.h>
#include <stdlib.h>

#include "cstring.h"
#include <stdio.h>

void cstring_new_should_correctly_initialize_cstring() {
    CString* string = cstring_new("xyz");
    assert(string != NULL);
    assert(string->raw_string != NULL);
    assert(strcmp(string->raw_string, "xyz") == 0);
    assert(string->length == 3);

    free(string);
}

void cstring_raw_should_return_correct_string() {
    CString* string = cstring_new("abc");
    const char* raw = cstring_raw(string);

    assert(raw != NULL);
    assert(strcmp(raw, string->raw_string) == 0);
    assert(raw != string->raw_string);
}

void cstring_get_should_return_correct_character() {
    CString* string = cstring_new("abc");

    assert(cstring_get(string, 0) == 'a');
    assert(cstring_get(string, 1) == 'b');
    assert(cstring_get(string, 2) == 'c');
}

void cstring_get_should_return_null_when_index_out_of_range() {
    CString* string = cstring_new("abc");

    assert(cstring_get(string, 3) == 0);
    assert(cstring_get(string, 4) == 0);
}

void cstring_set_should_modify_string() {
    CString* string = cstring_new("abx");
    
    cstring_set(string, 'c', 2);

    assert(cstring_get(string, 2) == 'c');
}

void cstring_set_should_not_modify_string_when_index_out_of_range() {
    CString* string = cstring_new("a");
    
    cstring_set(string, 'c', 1);

    assert(cstring_get(string, 0) == 'a');
}

void run_all_tests() {
    // cstring_new
    cstring_new_should_correctly_initialize_cstring();
    
    // cstring_raw
    cstring_raw_should_return_correct_string();

    // cstring_get
    cstring_get_should_return_correct_character();
    cstring_get_should_return_null_when_index_out_of_range();

    //cstring_set
    cstring_set_should_modify_string();
    cstring_set_should_not_modify_string_when_index_out_of_range();
}