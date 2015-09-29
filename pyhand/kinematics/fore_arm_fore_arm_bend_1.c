/******************************************************************************
 *                      Code generated with sympy 0.7.6                       *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                       This file is part of 'project'                       *
 ******************************************************************************/
#include "fore_arm_fore_arm_bend_1.h"
#include <math.h>

double fore_arm_fore_arm_bend_1(double fore_arm_bend, double fore_arm_length, double fore_arm_side, double hind_arm_bend, double hind_arm_side, double local_x, double local_z, double root_scale) {

   double fore_arm_fore_arm_bend_1_result;
   fore_arm_fore_arm_bend_1_result = fore_arm_length*root_scale*(-(sin(fore_arm_side)*cos(hind_arm_side) + sin(hind_arm_side)*cos(fore_arm_side)*cos(hind_arm_bend))*sin(fore_arm_bend) - sin(hind_arm_bend)*sin(hind_arm_side)*cos(fore_arm_bend)) + local_x*(-(sin(fore_arm_side)*cos(hind_arm_side) + sin(hind_arm_side)*cos(fore_arm_side)*cos(hind_arm_bend))*sin(fore_arm_bend) - sin(hind_arm_bend)*sin(hind_arm_side)*cos(fore_arm_bend)) + local_z*((sin(fore_arm_side)*cos(hind_arm_side) + sin(hind_arm_side)*cos(fore_arm_side)*cos(hind_arm_bend))*cos(fore_arm_bend) - sin(fore_arm_bend)*sin(hind_arm_bend)*sin(hind_arm_side));
   return fore_arm_fore_arm_bend_1_result;

}
