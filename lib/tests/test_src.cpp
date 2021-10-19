#include <gtest/gtest.h>
#include <iostream>
#include "header.hpp" 

TEST(HelloTest, SayHelloFunc) {
  Cls cls;
  double ret = cls.SayHello();
  EXPECT_EQ(5.4, ret);
}
 
int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
