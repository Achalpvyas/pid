/*!
 *  \brief 		File including the class definition and stub
 *  \file  		Header file - pid_controller
 *  \author 	part1: Sayan Brahma(driver) Akwashi a Obeng(navigator)
 *  \author 	part2: Akwashi a Obeng(driver) Sayan Brahma(navigator)
 *  \copyright  Sayan Brahma and Akwashi a Obeng
 *  \
 */

#include <iostream>
#include "../include/pid_controller.hpp"
/**
 * @brief constructor definition for initializing the default values
 */
pidController::pidController() {
}
/**
 * @brief constructor definition for initializing the user input values
 * @param kpInput user input of the kp parameter
 * @param kiInput user input of the ki parameter
 * @param kdInput user input of the kd parameter
 * @param dtInput user input of the dt parameter
 */
pidController::pidController(double kpInput, double kiInput,
double kdInput, double dtInput) {
    kp = kpInput, ki = kiInput, kd = kdInput, dt = dtInput;

    std::cout << "The user entered parameters are: kp = " << kp << " ki = "
<< ki << " kd = " << kd << " dt = " << dt << std::endl;
}
/**
 * @brief The compute function definition computes the error between the reference value and the current value
 * @param setValue This is the reference value
 * @param currentValue This is the current value which keeps on changing
 * @return the calculated value from the error
 */
double pidController::compute(double setValue, double currentValue) {
    double error = setValue - currentValue;  // compute the error
    std::cout << "Error- : " << error << std::endl;

    double cv = 0;
      if (dt > 0) {
          cv = (kp * error) + (ki * error * dt)
+ (kd * error / dt);
      } else {
      std::cout << "Time has to be a non-negative value. "
              "Output velocity set to 0.";
      }
      return cv;
}
/**
 * @brief This function returns the dt value
 * @return dt
 */
double pidController::returndt() {
    return dt;
}
/**
 * @brief Destructor
 */
pidController::~pidController() {
}
