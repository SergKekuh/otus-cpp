#define GOOGLE_TEST_MODULE test_version

#include "lib.h"

#include <gtest/gtest.h>
#include <gmock/gmock.h>

TEST(TestGroupName, test_version)
{
  ASSERT_TRUE(version() > 0);
}
