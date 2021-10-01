#include <gtest/gtest.h>
#include <PID.hpp>

/**
* @brief Test for kp, ki, kd gain update
*/
TEST(PIDTest, gainUpdate)
{
    PIDController testPID(7, 9, 3);
    testPID.updateParameters(7, 9, 5);

    EXPECT_EQ(7, testPID.getValueKp());
    EXPECT_EQ(9, testPID.getValueKi());
    EXPECT_EQ(5, testPID.getValueKd());
}

/**
* @brief Test for kp, ki, kd gain update
*/
TEST(PIDTest1, gainUpdate1)
{
    PIDController testPID(7, 9, 3);
    testPID.updateParameters(0, 0, 0);

    EXPECT_EQ(0, testPID.getValueKp());
    EXPECT_EQ(0, testPID.getValueKi());
    EXPECT_EQ(0, testPID.getValueKd());
}

/**
* @brief Test for compute function
*/
TEST(PIDTest2, computeFunction1)
{
    PIDController testPID(7, 9, 3);
    double output = testPID.compute(90, 30);
    EXPECT_EQ(0, output);
}

/**
* @brief Test for compute function
*/
TEST(PIDTest3, computeFunction2)
{
    PIDController testPID(7, 9, 3);
    testPID.updateParameters(0, 1, 2);
    double output = testPID.compute(90, 30);
    EXPECT_EQ(0, output);
}

/**
* @brief Test for compute function
*/
TEST(PIDTest4, computeFunction3)
{
    PIDController testPID(7, 9, 3);
    testPID.updateParameters(0, 1, 2);
    double output = testPID.compute(20, 30);
    EXPECT_EQ(0, output);
}