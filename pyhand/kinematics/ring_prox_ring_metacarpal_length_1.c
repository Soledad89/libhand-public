/******************************************************************************
 *                      Code generated with sympy 0.7.6                       *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                       This file is part of 'project'                       *
 ******************************************************************************/
#include "ring_prox_ring_metacarpal_length_1.h"
#include <math.h>

double ring_prox_ring_metacarpal_length_1(double fore_arm_bend, double fore_arm_side, double hind_arm_bend, double hind_arm_side, double ring_metacarpal_bend, double ring_metacarpal_side, double root_scale) {

   double ring_prox_ring_metacarpal_length_1_result;
   ring_prox_ring_metacarpal_length_1_result = root_scale*((((sin(fore_arm_side)*cos(hind_arm_side) + sin(hind_arm_side)*cos(fore_arm_side)*cos(hind_arm_bend))*cos(fore_arm_bend) - sin(fore_arm_bend)*sin(hind_arm_bend)*sin(hind_arm_side))*cos(ring_metacarpal_side) + (-sin(fore_arm_side)*sin(hind_arm_side)*cos(hind_arm_bend) + cos(fore_arm_side)*cos(hind_arm_side))*sin(ring_metacarpal_side))*cos(ring_metacarpal_bend) - ((sin(fore_arm_side)*cos(hind_arm_side) + sin(hind_arm_side)*cos(fore_arm_side)*cos(hind_arm_bend))*sin(fore_arm_bend) + sin(hind_arm_bend)*sin(hind_arm_side)*cos(fore_arm_bend))*sin(ring_metacarpal_bend));
   return ring_prox_ring_metacarpal_length_1_result;

}
