/******************************************************************************
 *                      Code generated with sympy 0.7.6                       *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                       This file is part of 'project'                       *
 ******************************************************************************/
#include "index_metacarpal_hind_arm_bend_2.h"
#include <math.h>

double index_metacarpal_hind_arm_bend_2(double fore_arm_bend, double fore_arm_length, double fore_arm_side, double hind_arm_bend, double hind_arm_length, double index_metacarpal_bend, double index_metacarpal_length, double index_metacarpal_side, double local_x, double local_y, double local_z, double root_scale) {

   double index_metacarpal_hind_arm_bend_2_result;
   index_metacarpal_hind_arm_bend_2_result = fore_arm_length*root_scale*(sin(fore_arm_bend)*sin(hind_arm_bend) - cos(fore_arm_bend)*cos(fore_arm_side)*cos(hind_arm_bend)) - hind_arm_length*root_scale*cos(hind_arm_bend) + index_metacarpal_length*root_scale*(((sin(fore_arm_bend)*sin(hind_arm_bend) - cos(fore_arm_bend)*cos(fore_arm_side)*cos(hind_arm_bend))*cos(index_metacarpal_side) + sin(fore_arm_side)*sin(index_metacarpal_side)*cos(hind_arm_bend))*cos(index_metacarpal_bend) - (-sin(fore_arm_bend)*cos(fore_arm_side)*cos(hind_arm_bend) - sin(hind_arm_bend)*cos(fore_arm_bend))*sin(index_metacarpal_bend)) + local_x*(((sin(fore_arm_bend)*sin(hind_arm_bend) - cos(fore_arm_bend)*cos(fore_arm_side)*cos(hind_arm_bend))*cos(index_metacarpal_side) + sin(fore_arm_side)*sin(index_metacarpal_side)*cos(hind_arm_bend))*cos(index_metacarpal_bend) - (-sin(fore_arm_bend)*cos(fore_arm_side)*cos(hind_arm_bend) - sin(hind_arm_bend)*cos(fore_arm_bend))*sin(index_metacarpal_bend)) + local_y*(-(sin(fore_arm_bend)*sin(hind_arm_bend) - cos(fore_arm_bend)*cos(fore_arm_side)*cos(hind_arm_bend))*sin(index_metacarpal_side) + sin(fore_arm_side)*cos(hind_arm_bend)*cos(index_metacarpal_side)) + local_z*(((sin(fore_arm_bend)*sin(hind_arm_bend) - cos(fore_arm_bend)*cos(fore_arm_side)*cos(hind_arm_bend))*cos(index_metacarpal_side) + sin(fore_arm_side)*sin(index_metacarpal_side)*cos(hind_arm_bend))*sin(index_metacarpal_bend) + (-sin(fore_arm_bend)*cos(fore_arm_side)*cos(hind_arm_bend) - sin(hind_arm_bend)*cos(fore_arm_bend))*cos(index_metacarpal_bend));
   return index_metacarpal_hind_arm_bend_2_result;

}
