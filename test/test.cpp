/*!
 *  \brief 		This is the test file in the test folder
 *  \file  		Test file - test.cpp
 *  \author 	part1: Sayan Brahma(driver) Akwashi a Obeng(navigator)
 *  \author 	part2: Akwashi a Obeng(driver) Sayan Brahma(navigator)
 *  \copyright  Sayan Brahma and Akwashi a Obeng
 *  \
 */
//
//
//

#include <gtest/gtest.h>
#include "../include/pid_controller.hpp"
/*
TEST(dummy, should_pass) {
  EXPECT_EQ(1, 1);
}
*/
pidController ob(1.0, 0, 0, 1);
pidController ob1(0.0, 0, 0, 1);
pidController ob2(-1, -1, -1, 1);

/**
 * @brief This is the kp test i.e., it is only a proportional controller with all the parameters set to 0
 */

TEST(kptest, should_pass) {
  EXPECT_DOUBLE_EQ(ob.compute(12, 10), 2.0);
}
/**
 * @brief This is the zero test i.e., when all the parameters are zero then the final value should be 0
 */

TEST(zerotest, should_pass) {
  EXPECT_DOUBLE_EQ(ob1.compute(12, 10), 0.0);
}
/**
 * @brief This is the negative test i.e., when all the parameters are -ve then the final value should be -ve
 */

TEST(negativetest, should_pass) {
  EXPECT_DOUBLE_EQ(ob2.compute(12, 10), -6.0);
}

