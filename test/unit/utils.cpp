// Copyright (c) 2023 Nodazi, All Rights Reserves
// Author : DaHyun Noh
#include "math/utils.hpp"

#include <cmath>
#include <limits>
#include <stdexcept>

#include "gtest/gtest.h"

namespace nodazi::math {
double inf = std::numeric_limits<double>::infinity();
double nan = std::numeric_limits<double>::quiet_NaN();
TEST(MathUtils, Add) {
  // double type , return lhs +rhs
  // inf , nan , lhs + nan = nan
  // lhs, rhs ->nan, if -> exception std::invalid_argument

  EXPECT_EQ(Add(0.0, 0.0), 0.0);
  EXPECT_EQ(Add(1.0, 0.0), 1.0);

  EXPECT_THROW(Add(nan, 0.0), std::invalid_argument);
  EXPECT_THROW(Add(nan, nan), std::invalid_argument);
  EXPECT_THROW(Add(0.0, inf), std::invalid_argument);
  EXPECT_THROW(Add(inf, 0.0), std::invalid_argument);
  EXPECT_THROW(Add(inf, inf), std::invalid_argument);
}
TEST(MathUtils, Subtract) {
  // double type , return lhs - rhs
  // inf , nan , lhs - nan = nan
  // lhs, rhs ->nan, if -> exception std::invalid_argument

  EXPECT_EQ(Subtract(3.0, 1.0), 2.0);
  EXPECT_EQ(Subtract(1.0, 0.0), 1.0);

  EXPECT_THROW(Subtract(nan, 0.0), std::invalid_argument);
  EXPECT_THROW(Subtract(nan, nan), std::invalid_argument);
  EXPECT_THROW(Subtract(0.0, inf), std::invalid_argument);
  EXPECT_THROW(Subtract(inf, 0.0), std::invalid_argument);
  EXPECT_THROW(Subtract(inf, inf), std::invalid_argument);
}
TEST(MathUtils, Multiply) {
  // double type , return lhs * rhs
  // inf , nan , lhs * nan = nan
  // lhs, rhs ->nan, if -> exception std::invalid_argument

  EXPECT_EQ(Multiply(0.0, 0.0), 0.0);
  EXPECT_EQ(Multiply(1.0, 0.0), 0.0);
  EXPECT_EQ(Multiply(1.0, 0.0), 0.0);

  EXPECT_THROW(Multiply(nan, 0.0), std::invalid_argument);
  EXPECT_THROW(Multiply(nan, nan), std::invalid_argument);
  EXPECT_THROW(Multiply(0.0, inf), std::invalid_argument);
  EXPECT_THROW(Multiply(inf, 0.0), std::invalid_argument);
  EXPECT_THROW(Multiply(inf, inf), std::invalid_argument);
}
TEST(MathUtils, Divide) {
  // double type , return lhs +rhs
  // inf , nan , lhs + nan = nan
  // lhs, rhs ->nan, if -> exception std::invalid_argument

  EXPECT_EQ(Divide(3.0, 1.0), 3.0);

  EXPECT_THROW(Divide(nan, 0.0), std::invalid_argument);
  // EXPECT_THROW(Divide(nan, nan), std::invalid_argument);
  // EXPECT_THROW(Divide(0.0, inf), std::invalid_argument);
  EXPECT_THROW(Divide(inf, 0.0), std::invalid_argument);
  // EXPECT_THROW(Divide(inf, inf), std::invalid_argument);
}

}  // namespace nodazi::math
