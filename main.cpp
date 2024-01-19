#include "lib.h"

#include "gtest/gtest.h"
#include <iostream>

int main (int, char **) 
{
    ::testing::InitGoogleTest(version());
    std::cout << "Version: " << version() << std::endl;
    std::cout << "Hello, world!" << std::endl;
    return RUN_ALL_TESTS();
}