#include <iostream>
#include <memory>
#include "test.h"

int main() {
    auto test = std::make_unique<test::Test>();
    std::cout << "result: " << test->run() << std::endl;
    return 0;
}
