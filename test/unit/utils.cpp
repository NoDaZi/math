// Copyright (c) 2023 Nodazi, All Rights Reserves
// Author : DaHyun Noh
#include <limits>
#include <stdecept>

#include "gtest/gtest.h"
#include "math/utils.hpp"

namespace nodazi::math {
TEST(MathUtils, Add) {
  // double type , return lhs +rhs
  // inf , nan , lhs + nan = nan
  // lhs, rhs ->nan, if -> exception std::invalid_argument

  // EXPECT_THROW(Add(0.0, std::nan),std::invalid_argument);
  // EXPECT_THROW(Add(std::nan, 0.0),std::invalid_argument);
  // EXPECT_THROW(Add(std::nan, std::nan),std::invalid_argument);
  // EXPECT_THROW(Add(0.0, std::inf),std::invalid_argument);
  // EXPECT_THROW(Add(std::inf, 0.0),std::invalid_argument);
  // EXPECT_THROW(Add(std::inf, std::inf),std::invalid_argument);

  // 같은 경우
  EXPECT_EQ(Add(0.0, 0.0), 0.0);
  EXPECT_EQ(Add(1.0, 0.0), 1.0);
  EXPECT_EQ(Add(0.0, 1.0), 1.0);
  EXPECT_EQ(Add(0.5, 0.5), 1.0);

  EXPECT_THROW(statement, expected_exception)
}
}  // namespace nodazi::math
