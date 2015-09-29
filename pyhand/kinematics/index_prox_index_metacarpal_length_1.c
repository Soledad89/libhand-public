/******************************************************************************
 *                      Code generated with sympy 0.7.6                       *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                       This file is part of 'project'                       *
 ******************************************************************************/
#include "index_prox_index_metacarpal_length_1.h"
#include <math.h>

double index_prox_index_metacarpal_length_1(double fore_arm_bend, double fore_arm_side, double hind_arm_bend, double hind_arm_side, double index_metacarpal_bend, double index_metacarpal_side, double root_scale) {

   double index_prox_index_metacarpal_length_1_result;
   index_prox_index_metacarpal_length_1_result = root_scale*((((sin(fore_arm_side)*cos(hind_arm_side) + sin(hind_arm_side)*cos(fore_arm_side)*cos(hind_arm_bend))*cos(fore_arm_bend) - sin(fore_arm_bend)*sin(hind_arm_bend)*sin(hind_arm_side))*cos(index_metacarpal_side) + (-sin(fore_arm_side)*sin(hind_arm_side)*cos(hind_arm_bend) + cos(fore_arm_side)*cos(hind_arm_side))*sin(index_metacarpal_side))*cos(index_metacarpal_bend) - ((sin(fore_arm_side)*cos(hind_arm_side) + sin(hind_arm_side)*cos(fore_arm_side)*cos(hind_arm_bend))*sin(fore_arm_bend) + sin(hind_arm_bend)*sin(hind_arm_side)*cos(fore_arm_bend))*sin(index_metacarpal_bend));
   return index_prox_index_metacarpal_length_1_result;

}
