/******************************************************************************
 *                      Code generated with sympy 0.7.6                       *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                       This file is part of 'project'                       *
 ******************************************************************************/
#include "thumb_metacarpal_local_x_0.h"
#include <math.h>

double thumb_metacarpal_local_x_0(double fore_arm_bend, double fore_arm_side, double hind_arm_bend, double hind_arm_side, double thumb_metacarpal_bend, double thumb_metacarpal_side) {

   double thumb_metacarpal_local_x_0_result;
   thumb_metacarpal_local_x_0_result = (((-sin(fore_arm_side)*sin(hind_arm_side) + cos(fore_arm_side)*cos(hind_arm_bend)*cos(hind_arm_side))*cos(fore_arm_bend) - sin(fore_arm_bend)*sin(hind_arm_bend)*cos(hind_arm_side))*cos(thumb_metacarpal_side) + (-sin(fore_arm_side)*cos(hind_arm_bend)*cos(hind_arm_side) - sin(hind_arm_side)*cos(fore_arm_side))*sin(thumb_metacarpal_side))*cos(thumb_metacarpal_bend) - ((-sin(fore_arm_side)*sin(hind_arm_side) + cos(fore_arm_side)*cos(hind_arm_bend)*cos(hind_arm_side))*sin(fore_arm_bend) + sin(hind_arm_bend)*cos(fore_arm_bend)*cos(hind_arm_side))*sin(thumb_metacarpal_bend);
   return thumb_metacarpal_local_x_0_result;

}
