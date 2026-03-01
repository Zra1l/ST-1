// Copyright 2025 UNN-CS

#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"

TEST(st1, checkPrime_basic) {
  EXPECT_FALSE(checkPrime(0));
  EXPECT_FALSE(checkPrime(1));
  EXPECT_TRUE(checkPrime(2));
  EXPECT_TRUE(checkPrime(13));
}
TEST(st1, checkPrime_bigValue) {
  EXPECT_FALSE(checkPrime(121));
  EXPECT_TRUE(checkPrime(1021));
  EXPECT_FALSE(checkPrime(153234));
}
TEST(st1, nPrime_lite) {
  EXPECT_EQ(nPrime(1), 2);
  EXPECT_EQ(nPrime(3), 5);
  EXPECT_EQ(nPrime(5), 11);
}
TEST(st1, nPrime_large) {
  EXPECT_EQ(nPrime(10), 29);
}
TEST(st1, nextPrime_lite) {
  EXPECT_EQ(nextPrime(2), 3);
  EXPECT_EQ(nextPrime(11), 13);
}
TEST(st1, nextPrime_zero) {
  EXPECT_EQ(nextPrime(0), 2);
}
TEST(st1, sumPrime_lite) {
  EXPECT_EQ(sumPrime(3), 2);
}
TEST(st1, sumPrime_zero) {
  EXPECT_EQ(sumPrime(0), 0);
}
TEST(st1, sumPrime1) {
  EXPECT_EQ(sumPrime(2000000), 142913828922);
}
TEST(st1, sumPrime2) {
  EXPECT_EQ(sumPrime(10), 17);
}
