#include "lib.h"

#include "gtest/gtest.h"
#include <iostream>

int main (int argc, char **argv) 
{
    ::testing::InitGoogleTest(&argc, argv);
    std::cout << "Version: " << version() << std::endl;
    std::cout << "Hello, world!" << std::endl;
    return RUN_ALL_TESTS();
}