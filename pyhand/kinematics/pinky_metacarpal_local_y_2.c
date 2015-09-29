/******************************************************************************
 *                      Code generated with sympy 0.7.6                       *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                       This file is part of 'project'                       *
 ******************************************************************************/
#include "pinky_metacarpal_local_y_2.h"
#include <math.h>

double pinky_metacarpal_local_y_2(double fore_arm_bend, double fore_arm_side, double hind_arm_bend, double pinky_metacarpal_side) {

   double pinky_metacarpal_local_y_2_result;
   pinky_metacarpal_local_y_2_result = -(-sin(fore_arm_bend)*cos(hind_arm_bend) - sin(hind_arm_bend)*cos(fore_arm_bend)*cos(fore_arm_side))*sin(pinky_metacarpal_side) + sin(fore_arm_side)*sin(hind_arm_bend)*cos(pinky_metacarpal_side);
   return pinky_metacarpal_local_y_2_result;

}
