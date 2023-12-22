// Copyright (c) 2023 Nodazi, All Rights Reserves
// Author : DaHyun Noh

#include "math/utils.hpp"

#include <cmath>
#include <limits>
#include <stdexcept>

namespace nodazi::math {
auto Add(double lhs, double rhs) -> double {
  if (std::isnan(lhs) || std::isnan(rhs) || std::isinf(lhs) ||
      std::isinf(rhs)) {
    throw std::invalid_argument("rhs is nan or inf");
  }

  return lhs + rhs;
}

auto Subtract(double lhs, double rhs) -> double {
  if (std::isnan(lhs) || std::isnan(rhs) || std::isinf(lhs) ||
      std::isinf(rhs)) {
    throw std::invalid_argument("rhs is nan or inf");
  }

  return lhs - rhs;
}

auto Multiply(double lhs, double rhs) -> double {
  if (std::isnan(lhs) || std::isnan(rhs) || std::isinf(lhs) ||
      std::isinf(rhs)) {
    throw std::invalid_argument("rhs is nan or inf");
  }

  return lhs * rhs;
}

auto Divide(double lhs, double rhs) -> double {
  if (std::isnan(lhs) || std::isnan(rhs) || std::isinf(lhs) ||
      std::isinf(rhs)) {
    throw std::invalid_argument("rhs is nan or inf");
  } else if (rhs == 0.0) {
    throw std::runtime_error("Division by zero");
  }

  return lhs / rhs;
}

auto IsEqual(double lhs, double rhs) -> bool {
  return (std::abs(lhs - rhs) < std::numeric_limits<double>::epsilon());
  // double - 소수점 16자리까지 표현 가능
  // float - 소수점 7자리까지 표현 가능
}

auto IsEqual(float lhs, float rhs) -> bool {
  return (std::abs(lhs - rhs) < std::numeric_limits<float>::epsilon());
  // double - 소수점 16자리까지 표현 가능
  // float - 소수점 7자리까지 표현 가능
}

}  // namespace nodazi::math