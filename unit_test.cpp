#include "gtest/gtest.h"
#include "Function_test.hpp"
//#include "Main_test.hpp"
int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
