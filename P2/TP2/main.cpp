#include <iostream>
#include "gtest/gtest.h"

int main(int argc, char **argv) {
    std::cout << "Running all tests for TP2..." << std::endl;
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}