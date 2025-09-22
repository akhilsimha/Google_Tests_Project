#include <iostream>
#include <gtest/gtest.h>

/* A simple function to test */
int add(int a, int b) {
    return a + b;
}

/* A Google Test case */
TEST(AdditionTest, BasicAssertions) {
    EXPECT_EQ(add(2, 2), 4);
    EXPECT_NE(add(2, 3), 5);
}

int main(int argc, char **argv) {
    std::cout << "Hello World!\n";

    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}