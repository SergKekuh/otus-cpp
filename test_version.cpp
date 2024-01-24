
#include "lib.h"

#include <gtest/gtest.h>
#include <gmock/gmock.h>

TEST(TestGroupName, test_Name)
{
  ASSERT_TRUE(version() > 0);
}

int main(int argc, char **argv)
{
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
