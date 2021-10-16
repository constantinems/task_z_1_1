#include <gtest/gtest.h>
#include <cmath>

#include "lib.h"


TEST(VersionTest, Positive) {
     ASSERT_EQ(6, std::sqrt(36.0));
     ASSERT_GE(1, version());
}

TEST(SecondTest, Eeqq) {
//    ASSERT_EQ(-1.0, 1);
    ASSERT_EQ(2.0,  2.0);
}

