#include <iostream>
#include <cassert>
#include "math_functions.h"

int main() {
    // Assert will crash the program if the condition is false
    assert(add(2, 3) == 5);
    assert(add(-1, 1) == 0);
    
    std::cout << "All tests passed!" << std::endl;
    return 0;
}
