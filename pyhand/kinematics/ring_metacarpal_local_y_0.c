/******************************************************************************
 *                      Code generated with sympy 0.7.6                       *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                       This file is part of 'project'                       *
 ******************************************************************************/
#include "ring_metacarpal_local_y_0.h"
#include <math.h>

double ring_metacarpal_local_y_0(double fore_arm_bend, double fore_arm_side, double hind_arm_bend, double hind_arm_side, double ring_metacarpal_side) {

   double ring_metacarpal_local_y_0_result;
   ring_metacarpal_local_y_0_result = -((-sin(fore_arm_side)*sin(hind_arm_side) + cos(fore_arm_side)*cos(hind_arm_bend)*cos(hind_arm_side))*cos(fore_arm_bend) - sin(fore_arm_bend)*sin(hind_arm_bend)*cos(hind_arm_side))*sin(ring_metacarpal_side) + (-sin(fore_arm_side)*cos(hind_arm_bend)*cos(hind_arm_side) - sin(hind_arm_side)*cos(fore_arm_side))*cos(ring_metacarpal_side);
   return ring_metacarpal_local_y_0_result;

}
