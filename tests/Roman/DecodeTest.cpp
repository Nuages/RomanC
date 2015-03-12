 #include "cute.h"
#include "ide_listener.h"
#include "xml_listener.h"
#include "cute_runner.h"

#include "Decode.c"

void  Decode_I(){
    ASSERT_EQUAL(roman_decode("I"), 1);
}

void Decode_V(){
    ASSERT_EQUAL(roman_decode("V"), 5);
}

cute::suite make_suite(){
    cute::suite s;
    s.push_back(CUTE(Decode_I));
    s.push_back(CUTE(Decode_V));
    return s;
}
