#include <gtest/gtest.h>
#include "calculator.h"

TEST(CalculatorTest, Addition) {
    EXPECT_DOUBLE_EQ(Calculator::add(2, 3), 5);
}

TEST(CalculatorTest, DivisionByZero) {
    EXPECT_THROW(Calculator::divide(5, 0), std::invalid_argument);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}