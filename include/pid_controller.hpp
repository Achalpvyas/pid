/*!
 *  \brief 		File including the class definition and stub
 *  \file  		Header file - pid_controller
 *  \author 	part1: Sayan Brahma(driver) Akwashi a Obeng(navigator)
 *  \author 	part2: Akwashi a Obeng(driver) Sayan Brahma(navigator)
 *  \copyright  Sayan Brahma and Akwashi a Obeng
 *  \
 */


#ifndef INCLUDE_PID_CONTROLLER_HPP_
#define INCLUDE_PID_CONTROLLER_HPP_

class pidController {
	/**
	 *	@brief contains the private data members
	 */
 private:
    double kp = 0.0, ki = 0.0, kd = 0.0, dt = 1.0;
    double setValue = 0.0, currentValue = 0.0;
	/**
	 *	@brief contains all the public methods/functions
	 */
 public:
	/**
	 *	@brief constructor to initialize the default values
	 */
    pidController();
	/**
	 * @brief constructor to initialize the default values
	 * @param kp proportional constant
	 * @param ki integral constant
	 * @param kd differentiation constant
	 * @param dt differential time
	 */
    pidController(double kp, double ki, double kd, double dt);
	/**
	 *
	 */
    ~pidController();
	/**
	 *
	 */
    double compute(double setValue, double currentValue);
	/**
	 *
	 */
    double returndt();
};

#endif  // INCLUDE_PID_CONTROLLER_HPP_
