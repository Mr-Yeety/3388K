/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       joshi                                                     */
/*    Created:      11/2/2023, 9:28:24 AM                                     */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/
#include "vex.h"
#include <iostream>

using namespace vex;


// A global instance of vex::brain used for printing to the V5 brain screen
vex::brain Brain;
vex::controller Controller;


motor driveLeft = motor(PORT1, ratio18_1, false);
motor driveRight = motor(PORT2, ratio18_1, true);



int main() {

while (1)
{
    driveLeft.spin(vex::directionType::fwd, Controller.Axis3.value(), vex::velocityUnits::pct);
    driveRight.spin(vex::directionType::fwd, Controller.Axis2.value(), vex::velocityUnits::pct);

}
}