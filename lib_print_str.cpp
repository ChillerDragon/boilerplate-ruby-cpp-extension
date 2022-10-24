#include <iostream>
#include <rice/rice.hpp>

using namespace Rice;

void rb_print_str(const char * str) {
    std::cout << str << std::endl;
}

extern "C"

void Init_lib_print_str() {
    define_module("PrintStrModule")
        .define_module_function("print_str", &rb_print_str);
}

