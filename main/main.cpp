#include <iostream>
#include "formula.hpp"

int main() {
    std::cout << "Bla: " << Formula::bla(2) << std::endl;

    //For testing cpp check
    int a[3] = { 0, 1, 2 };
    std::cout << "print outside range "<<a[3]<<std::endl;
    return 0;
}