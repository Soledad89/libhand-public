/******************************************************************************
 *                      Code generated with sympy 0.7.6                       *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                       This file is part of 'project'                       *
 ******************************************************************************/
#include "thumb_metacarpal_fore_arm_length_0.h"
#include <math.h>

double thumb_metacarpal_fore_arm_length_0(double fore_arm_bend, double fore_arm_side, double hind_arm_bend, double hind_arm_side, double root_scale) {

   double thumb_metacarpal_fore_arm_length_0_result;
   thumb_metacarpal_fore_arm_length_0_result = root_scale*((-sin(fore_arm_side)*sin(hind_arm_side) + cos(fore_arm_side)*cos(hind_arm_bend)*cos(hind_arm_side))*cos(fore_arm_bend) - sin(fore_arm_bend)*sin(hind_arm_bend)*cos(hind_arm_side));
   return thumb_metacarpal_fore_arm_length_0_result;

}
