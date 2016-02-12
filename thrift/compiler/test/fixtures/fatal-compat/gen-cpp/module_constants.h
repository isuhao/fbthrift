/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include "module_types.h"

namespace test_cpp1 { namespace cpp_reflection {

struct module_constants {
  static constexpr int32_t const constant1_ = 1357;
  static constexpr int32_t constant1() { return constant1_; }
  // consider using folly::StringPiece instead of std::string whenever possible
  // to referencing this statically allocated string constant, in order to 
  // prevent unnecessary allocations
  static constexpr char const *const constant2_ = "hello";
  static constexpr char const* constant2() { return constant2_; }
  static constexpr enum1 const constant3_ = (enum1)0;
  static constexpr enum1 constant3() { return constant3_; }
};

class __attribute__((__deprecated__("moduleConstants suffers from the 'static initialization order fiasco' (https://isocpp.org/wiki/faq/ctors#static-init-order) and may CRASH your program. Instead, use module_constants::CONSTANT_NAME()"))) moduleConstants {
public:
  moduleConstants();

  int32_t constant1;
  std::string constant2;
  enum1 constant3;
};

}} // namespace
