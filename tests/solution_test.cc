#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(AddActual, AddReturn) {
  Solution solution;
  int actual = solution.Add(3, 5);
  int expected = 8;
  EXPECT_EQ(expected, actual);
}

TEST(AddActual1, AddReturn1) {
  Solution solution;
  std::string actual = solution.Add("abc", "def");
  std::string expected = "abcdef";
  EXPECT_EQ(expected, actual);
}

TEST(AddActual2, AddReturn2) {
  Solution solution;
  std::string actual = solution.Add("EE", 599);
  std::string expected = "EE599";
  EXPECT_EQ(expected, actual);
}

TEST(AddActual3, AddReturn3) {
  Solution solution;
  std::string actual = solution.Add("", 599);
  std::string expected = "Invalid input";
  EXPECT_EQ(expected, actual);
}