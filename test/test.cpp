#include <gtest/gtest.h>
#include <PID.hpp>

/**
* @brief Test for kp, ki, kd gain update
*/
TEST(PIDTest, gainUpdate)
{
    PIDController testPID(7, 8, 9);
    testPID.updateParameters(0, 0, 0);

    EXPECT_EQ(15, testPID.getValueKp());
    EXPECT_EQ(50.5, testPID.getValueKi());
    EXPECT_EQ(0.0, testPID.getValueKd());
}

/**
* @brief Test for compute function
*/
TEST(PIDTest, computeFunction)
{
    PIDController testPID(7, 8, 9);
    double output = testPID.compute(20, 30);
    EXPECT_EQ(0, output);
}
