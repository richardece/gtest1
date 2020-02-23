#include "gtest/gtest.h"
#include "formula.hpp"

TEST(blaTest, test1) {
    //arrange
    //act
    //assert
    EXPECT_EQ (Formula::bla (0),  0);
    EXPECT_EQ (Formula::bla (1), 1);
    EXPECT_EQ (Formula::bla (2), 4);
}