/******************************************************************************
 *                      Code generated with sympy 0.7.6                       *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                       This file is part of 'project'                       *
 ******************************************************************************/
#include "pinky_dist_pinky_prox_length_1.h"
#include <math.h>

double pinky_dist_pinky_prox_length_1(double fore_arm_bend, double fore_arm_side, double hind_arm_bend, double hind_arm_side, double pinky_metacarpal_bend, double pinky_metacarpal_side, double pinky_prox_bend, double pinky_prox_side, double root_scale) {

   double pinky_dist_pinky_prox_length_1_result;
   pinky_dist_pinky_prox_length_1_result = root_scale*((((((sin(fore_arm_side)*cos(hind_arm_side) + sin(hind_arm_side)*cos(fore_arm_side)*cos(hind_arm_bend))*cos(fore_arm_bend) - sin(fore_arm_bend)*sin(hind_arm_bend)*sin(hind_arm_side))*cos(pinky_metacarpal_side) + (-sin(fore_arm_side)*sin(hind_arm_side)*cos(hind_arm_bend) + cos(fore_arm_side)*cos(hind_arm_side))*sin(pinky_metacarpal_side))*cos(pinky_metacarpal_bend) - ((sin(fore_arm_side)*cos(hind_arm_side) + sin(hind_arm_side)*cos(fore_arm_side)*cos(hind_arm_bend))*sin(fore_arm_bend) + sin(hind_arm_bend)*sin(hind_arm_side)*cos(fore_arm_bend))*sin(pinky_metacarpal_bend))*cos(pinky_prox_side) + (-((sin(fore_arm_side)*cos(hind_arm_side) + sin(hind_arm_side)*cos(fore_arm_side)*cos(hind_arm_bend))*cos(fore_arm_bend) - sin(fore_arm_bend)*sin(hind_arm_bend)*sin(hind_arm_side))*sin(pinky_metacarpal_side) + (-sin(fore_arm_side)*sin(hind_arm_side)*cos(hind_arm_bend) + cos(fore_arm_side)*cos(hind_arm_side))*cos(pinky_metacarpal_side))*sin(pinky_prox_side))*cos(pinky_prox_bend) - ((((sin(fore_arm_side)*cos(hind_arm_side) + sin(hind_arm_side)*cos(fore_arm_side)*cos(hind_arm_bend))*cos(fore_arm_bend) - sin(fore_arm_bend)*sin(hind_arm_bend)*sin(hind_arm_side))*cos(pinky_metacarpal_side) + (-sin(fore_arm_side)*sin(hind_arm_side)*cos(hind_arm_bend) + cos(fore_arm_side)*cos(hind_arm_side))*sin(pinky_metacarpal_side))*sin(pinky_metacarpal_bend) + ((sin(fore_arm_side)*cos(hind_arm_side) + sin(hind_arm_side)*cos(fore_arm_side)*cos(hind_arm_bend))*sin(fore_arm_bend) + sin(hind_arm_bend)*sin(hind_arm_side)*cos(fore_arm_bend))*cos(pinky_metacarpal_bend))*sin(pinky_prox_bend));
   return pinky_dist_pinky_prox_length_1_result;

}
