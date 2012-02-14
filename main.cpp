#include <iostream>
#include <exception>
#include "prime.hpp"

int main() try {
 cpp_morijobi::prime::prime<>().run();
}catch(const std::exception& e){
std::cerr << e.what();
}