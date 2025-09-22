#include <iostream>
#include <gtest/gtest.h>

/* A simple function to test */
int add(int a, int b) {
    return a + b;
}

int subtract (int c)
{
    return 10 - c; 
}
/* A Google Test case */
/* TEST(Name_Test_Suite, Name_Test_Case) */
TEST(AdditionTest, BasicAssertions) {
    EXPECT_EQ(add(2, 2), 4);
    EXPECT_NE(add(2, 3), 5);
}

TEST(SubtractionTest, BasicAssertions)
{
    EXPECT_EQ(subtract(10),5);
    EXPECT_NE(subtract(8),5); /* The Return value must not match 0 */
    EXPECT_NE(subtract(8),2); /* The Return value must not match 2 */
}

int main(int argc, char **argv) {
    std::cout << "Hello World!\n";

    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}