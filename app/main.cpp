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

int main() {
    double kp, ki, kd, dt, setValue, currentValue;
    std::cout << "Enter the kp, ki, kd parameters with spaces in "
"between- "<< std::endl;
    std::cin >>  kp >> ki >> kd;
    std::cout << "Enter the time in ( non-negative)- " << std::endl;
    std::cin >> dt;
    std::cout << "Enter the set value- " << std::endl;
    std::cin >> setValue;
    std::cout << "Enter the current value for trial- " << std::endl;
    std::cin >> currentValue;


    pidController pid(kp, ki, kd, dt);
    double nv = pid.compute(setValue, currentValue);
    std::cout << "The new value is- " << nv << std::endl;
    return 0;
}

