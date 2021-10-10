#include <gtest/gtest.h>
#include <cmath>

#include "lib.h"


TEST(VersionTest, Positive) {
     ASSERT_EQ(6, std::sqrt(36.0));
     ASSERT_EQ(1, version());
}

//TEST(SquareRootTest, NegativeNos) {
//    ASSERT_EQ(-1.0, 1);
//    ASSERT_EQ(2.0,  2.0);
//}

