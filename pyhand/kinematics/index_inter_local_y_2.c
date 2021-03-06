/******************************************************************************
 *                      Code generated with sympy 0.7.6                       *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                       This file is part of 'project'                       *
 ******************************************************************************/
#include "index_inter_local_y_2.h"
#include <math.h>

double index_inter_local_y_2(double fore_arm_bend, double fore_arm_side, double hind_arm_bend, double index_inter_side, double index_metacarpal_bend, double index_metacarpal_side, double index_prox_bend, double index_prox_side) {

   double index_inter_local_y_2_result;
   index_inter_local_y_2_result = -(((((-sin(fore_arm_bend)*cos(hind_arm_bend) - sin(hind_arm_bend)*cos(fore_arm_bend)*cos(fore_arm_side))*cos(index_metacarpal_side) + sin(fore_arm_side)*sin(hind_arm_bend)*sin(index_metacarpal_side))*cos(index_metacarpal_bend) - (-sin(fore_arm_bend)*sin(hind_arm_bend)*cos(fore_arm_side) + cos(fore_arm_bend)*cos(hind_arm_bend))*sin(index_metacarpal_bend))*cos(index_prox_side) + (-(-sin(fore_arm_bend)*cos(hind_arm_bend) - sin(hind_arm_bend)*cos(fore_arm_bend)*cos(fore_arm_side))*sin(index_metacarpal_side) + sin(fore_arm_side)*sin(hind_arm_bend)*cos(index_metacarpal_side))*sin(index_prox_side))*cos(index_prox_bend) - (((-sin(fore_arm_bend)*cos(hind_arm_bend) - sin(hind_arm_bend)*cos(fore_arm_bend)*cos(fore_arm_side))*cos(index_metacarpal_side) + sin(fore_arm_side)*sin(hind_arm_bend)*sin(index_metacarpal_side))*sin(index_metacarpal_bend) + (-sin(fore_arm_bend)*sin(hind_arm_bend)*cos(fore_arm_side) + cos(fore_arm_bend)*cos(hind_arm_bend))*cos(index_metacarpal_bend))*sin(index_prox_bend))*sin(index_inter_side) + (-(((-sin(fore_arm_bend)*cos(hind_arm_bend) - sin(hind_arm_bend)*cos(fore_arm_bend)*cos(fore_arm_side))*cos(index_metacarpal_side) + sin(fore_arm_side)*sin(hind_arm_bend)*sin(index_metacarpal_side))*cos(index_metacarpal_bend) - (-sin(fore_arm_bend)*sin(hind_arm_bend)*cos(fore_arm_side) + cos(fore_arm_bend)*cos(hind_arm_bend))*sin(index_metacarpal_bend))*sin(index_prox_side) + (-(-sin(fore_arm_bend)*cos(hind_arm_bend) - sin(hind_arm_bend)*cos(fore_arm_bend)*cos(fore_arm_side))*sin(index_metacarpal_side) + sin(fore_arm_side)*sin(hind_arm_bend)*cos(index_metacarpal_side))*cos(index_prox_side))*cos(index_inter_side);
   return index_inter_local_y_2_result;

}
