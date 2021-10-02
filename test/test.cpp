//! "Copyright [2019] Pratik Bhujbal, Sumedh Koppula"
/**
* @file test.cpp
* @author JSumedh Koppula, Pratik Bhujbal
* @brief This is a the test class for the PID implementation project
*/
#include <gtest/gtest.h>
#include <PID.hpp>

/**
* @brief Test for kp, ki, kd gain update
*/
TEST(PIDTest, gainUpdate) {
    PIDController testPID(1, 1, 1, 1, 20, -20);
    testPID.updateParameters(1, 1, 1);
    EXPECT_EQ(1, testPID.getValueKp());
    EXPECT_EQ(1, testPID.getValueKi());
    EXPECT_EQ(1, testPID.getValueKd());
}

/**
* @brief Test for compute function
*/
TEST(PIDTest2, computeFunction1) {
    PIDController testPID(0.5, 0.4, 0.6, 1, 20, -20);
    ASSERT_NEAR(7.5, testPID.compute(0, 5), 0.5);
}
