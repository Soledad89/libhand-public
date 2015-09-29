/******************************************************************************
 *                      Code generated with sympy 0.7.6                       *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                       This file is part of 'project'                       *
 ******************************************************************************/
#include "thumb_inter_hind_arm_bend_1.h"
#include <math.h>

double thumb_inter_hind_arm_bend_1(double fore_arm_bend, double fore_arm_length, double fore_arm_side, double hind_arm_bend, double hind_arm_length, double hind_arm_side, double local_x, double local_y, double local_z, double root_scale, double thumb_inter_bend, double thumb_inter_length, double thumb_inter_side, double thumb_metacarpal_bend, double thumb_metacarpal_length, double thumb_metacarpal_side, double thumb_prox_bend, double thumb_prox_length, double thumb_prox_side) {

   double thumb_inter_hind_arm_bend_1_result;
   thumb_inter_hind_arm_bend_1_result = fore_arm_length*root_scale*(-sin(fore_arm_bend)*sin(hind_arm_side)*cos(hind_arm_bend) - sin(hind_arm_bend)*sin(hind_arm_side)*cos(fore_arm_bend)*cos(fore_arm_side)) - hind_arm_length*root_scale*sin(hind_arm_bend)*sin(hind_arm_side) + local_x*(((((((-sin(fore_arm_bend)*sin(hind_arm_side)*cos(hind_arm_bend) - sin(hind_arm_bend)*sin(hind_arm_side)*cos(fore_arm_bend)*cos(fore_arm_side))*cos(thumb_metacarpal_side) + sin(fore_arm_side)*sin(hind_arm_bend)*sin(hind_arm_side)*sin(thumb_metacarpal_side))*cos(thumb_metacarpal_bend) - (-sin(fore_arm_bend)*sin(hind_arm_bend)*sin(hind_arm_side)*cos(fore_arm_side) + sin(hind_arm_side)*cos(fore_arm_bend)*cos(hind_arm_bend))*sin(thumb_metacarpal_bend))*cos(thumb_prox_side) + (-(-sin(fore_arm_bend)*sin(hind_arm_side)*cos(hind_arm_bend) - sin(hind_arm_bend)*sin(hind_arm_side)*cos(fore_arm_bend)*cos(fore_arm_side))*sin(thumb_metacarpal_side) + sin(fore_arm_side)*sin(hind_arm_bend)*sin(hind_arm_side)*cos(thumb_metacarpal_side))*sin(thumb_prox_side))*cos(thumb_prox_bend) - (((-sin(fore_arm_bend)*sin(hind_arm_side)*cos(hind_arm_bend) - sin(hind_arm_bend)*sin(hind_arm_side)*cos(fore_arm_bend)*cos(fore_arm_side))*cos(thumb_metacarpal_side) + sin(fore_arm_side)*sin(hind_arm_bend)*sin(hind_arm_side)*sin(thumb_metacarpal_side))*sin(thumb_metacarpal_bend) + (-sin(fore_arm_bend)*sin(hind_arm_bend)*sin(hind_arm_side)*cos(fore_arm_side) + sin(hind_arm_side)*cos(fore_arm_bend)*cos(hind_arm_bend))*cos(thumb_metacarpal_bend))*sin(thumb_prox_bend))*cos(thumb_inter_side) + (-(((-sin(fore_arm_bend)*sin(hind_arm_side)*cos(hind_arm_bend) - sin(hind_arm_bend)*sin(hind_arm_side)*cos(fore_arm_bend)*cos(fore_arm_side))*cos(thumb_metacarpal_side) + sin(fore_arm_side)*sin(hind_arm_bend)*sin(hind_arm_side)*sin(thumb_metacarpal_side))*cos(thumb_metacarpal_bend) - (-sin(fore_arm_bend)*sin(hind_arm_bend)*sin(hind_arm_side)*cos(fore_arm_side) + sin(hind_arm_side)*cos(fore_arm_bend)*cos(hind_arm_bend))*sin(thumb_metacarpal_bend))*sin(thumb_prox_side) + (-(-sin(fore_arm_bend)*sin(hind_arm_side)*cos(hind_arm_bend) - sin(hind_arm_bend)*sin(hind_arm_side)*cos(fore_arm_bend)*cos(fore_arm_side))*sin(thumb_metacarpal_side) + sin(fore_arm_side)*sin(hind_arm_bend)*sin(hind_arm_side)*cos(thumb_metacarpal_side))*cos(thumb_prox_side))*sin(thumb_inter_side))*cos(thumb_inter_bend) - (((((-sin(fore_arm_bend)*sin(hind_arm_side)*cos(hind_arm_bend) - sin(hind_arm_bend)*sin(hind_arm_side)*cos(fore_arm_bend)*cos(fore_arm_side))*cos(thumb_metacarpal_side) + sin(fore_arm_side)*sin(hind_arm_bend)*sin(hind_arm_side)*sin(thumb_metacarpal_side))*cos(thumb_metacarpal_bend) - (-sin(fore_arm_bend)*sin(hind_arm_bend)*sin(hind_arm_side)*cos(fore_arm_side) + sin(hind_arm_side)*cos(fore_arm_bend)*cos(hind_arm_bend))*sin(thumb_metacarpal_bend))*cos(thumb_prox_side) + (-(-sin(fore_arm_bend)*sin(hind_arm_side)*cos(hind_arm_bend) - sin(hind_arm_bend)*sin(hind_arm_side)*cos(fore_arm_bend)*cos(fore_arm_side))*sin(thumb_metacarpal_side) + sin(fore_arm_side)*sin(hind_arm_bend)*sin(hind_arm_side)*cos(thumb_metacarpal_side))*sin(thumb_prox_side))*sin(thumb_prox_bend) + (((-sin(fore_arm_bend)*sin(hind_arm_side)*cos(hind_arm_bend) - sin(hind_arm_bend)*sin(hind_arm_side)*cos(fore_arm_bend)*cos(fore_arm_side))*cos(thumb_metacarpal_side) + sin(fore_arm_side)*sin(hind_arm_bend)*sin(hind_arm_side)*sin(thumb_metacarpal_side))*sin(thumb_metacarpal_bend) + (-sin(fore_arm_bend)*sin(hind_arm_bend)*sin(hind_arm_side)*cos(fore_arm_side) + sin(hind_arm_side)*cos(fore_arm_bend)*cos(hind_arm_bend))*cos(thumb_metacarpal_bend))*cos(thumb_prox_bend))*sin(thumb_inter_bend)) + local_y*(-(((((-sin(fore_arm_bend)*sin(hind_arm_side)*cos(hind_arm_bend) - sin(hind_arm_bend)*sin(hind_arm_side)*cos(fore_arm_bend)*cos(fore_arm_side))*cos(thumb_metacarpal_side) + sin(fore_arm_side)*sin(hind_arm_bend)*sin(hind_arm_side)*sin(thumb_metacarpal_side))*cos(thumb_metacarpal_bend) - (-sin(fore_arm_bend)*sin(hind_arm_bend)*sin(hind_arm_side)*cos(fore_arm_side) + sin(hind_arm_side)*cos(fore_arm_bend)*cos(hind_arm_bend))*sin(thumb_metacarpal_bend))*cos(thumb_prox_side) + (-(-sin(fore_arm_bend)*sin(hind_arm_side)*cos(hind_arm_bend) - sin(hind_arm_bend)*sin(hind_arm_side)*cos(fore_arm_bend)*cos(fore_arm_side))*sin(thumb_metacarpal_side) + sin(fore_arm_side)*sin(hind_arm_bend)*sin(hind_arm_side)*cos(thumb_metacarpal_side))*sin(thumb_prox_side))*cos(thumb_prox_bend) - (((-sin(fore_arm_bend)*sin(hind_arm_side)*cos(hind_arm_bend) - sin(hind_arm_bend)*sin(hind_arm_side)*cos(fore_arm_bend)*cos(fore_arm_side))*cos(thumb_metacarpal_side) + sin(fore_arm_side)*sin(hind_arm_bend)*sin(hind_arm_side)*sin(thumb_metacarpal_side))*sin(thumb_metacarpal_bend) + (-sin(fore_arm_bend)*sin(hind_arm_bend)*sin(hind_arm_side)*cos(fore_arm_side) + sin(hind_arm_side)*cos(fore_arm_bend)*cos(hind_arm_bend))*cos(thumb_metacarpal_bend))*sin(thumb_prox_bend))*sin(thumb_inter_side) + (-(((-sin(fore_arm_bend)*sin(hind_arm_side)*cos(hind_arm_bend) - sin(hind_arm_bend)*sin(hind_arm_side)*cos(fore_arm_bend)*cos(fore_arm_side))*cos(thumb_metacarpal_side) + sin(fore_arm_side)*sin(hind_arm_bend)*sin(hind_arm_side)*sin(thumb_metacarpal_side))*cos(thumb_metacarpal_bend) - (-sin(fore_arm_bend)*sin(hind_arm_bend)*sin(hind_arm_side)*cos(fore_arm_side) + sin(hind_arm_side)*cos(fore_arm_bend)*cos(hind_arm_bend))*sin(thumb_metacarpal_bend))*sin(thumb_prox_side) + (-(-sin(fore_arm_bend)*sin(hind_arm_side)*cos(hind_arm_bend) - sin(hind_arm_bend)*sin(hind_arm_side)*cos(fore_arm_bend)*cos(fore_arm_side))*sin(thumb_metacarpal_side) + sin(fore_arm_side)*sin(hind_arm_bend)*sin(hind_arm_side)*cos(thumb_metacarpal_side))*cos(thumb_prox_side))*cos(thumb_inter_side)) + local_z*(((((((-sin(fore_arm_bend)*sin(hind_arm_side)*cos(hind_arm_bend) - sin(hind_arm_bend)*sin(hind_arm_side)*cos(fore_arm_bend)*cos(fore_arm_side))*cos(thumb_metacarpal_side) + sin(fore_arm_side)*sin(hind_arm_bend)*sin(hind_arm_side)*sin(thumb_metacarpal_side))*cos(thumb_metacarpal_bend) - (-sin(fore_arm_bend)*sin(hind_arm_bend)*sin(hind_arm_side)*cos(fore_arm_side) + sin(hind_arm_side)*cos(fore_arm_bend)*cos(hind_arm_bend))*sin(thumb_metacarpal_bend))*cos(thumb_prox_side) + (-(-sin(fore_arm_bend)*sin(hind_arm_side)*cos(hind_arm_bend) - sin(hind_arm_bend)*sin(hind_arm_side)*cos(fore_arm_bend)*cos(fore_arm_side))*sin(thumb_metacarpal_side) + sin(fore_arm_side)*sin(hind_arm_bend)*sin(hind_arm_side)*cos(thumb_metacarpal_side))*sin(thumb_prox_side))*cos(thumb_prox_bend) - (((-sin(fore_arm_bend)*sin(hind_arm_side)*cos(hind_arm_bend) - sin(hind_arm_bend)*sin(hind_arm_side)*cos(fore_arm_bend)*cos(fore_arm_side))*cos(thumb_metacarpal_side) + sin(fore_arm_side)*sin(hind_arm_bend)*sin(hind_arm_side)*sin(thumb_metacarpal_side))*sin(thumb_metacarpal_bend) + (-sin(fore_arm_bend)*sin(hind_arm_bend)*sin(hind_arm_side)*cos(fore_arm_side) + sin(hind_arm_side)*cos(fore_arm_bend)*cos(hind_arm_bend))*cos(thumb_metacarpal_bend))*sin(thumb_prox_bend))*cos(thumb_inter_side) + (-(((-sin(fore_arm_bend)*sin(hind_arm_side)*cos(hind_arm_bend) - sin(hind_arm_bend)*sin(hind_arm_side)*cos(fore_arm_bend)*cos(fore_arm_side))*cos(thumb_metacarpal_side) + sin(fore_arm_side)*sin(hind_arm_bend)*sin(hind_arm_side)*sin(thumb_metacarpal_side))*cos(thumb_metacarpal_bend) - (-sin(fore_arm_bend)*sin(hind_arm_bend)*sin(hind_arm_side)*cos(fore_arm_side) + sin(hind_arm_side)*cos(fore_arm_bend)*cos(hind_arm_bend))*sin(thumb_metacarpal_bend))*sin(thumb_prox_side) + (-(-sin(fore_arm_bend)*sin(hind_arm_side)*cos(hind_arm_bend) - sin(hind_arm_bend)*sin(hind_arm_side)*cos(fore_arm_bend)*cos(fore_arm_side))*sin(thumb_metacarpal_side) + sin(fore_arm_side)*sin(hind_arm_bend)*sin(hind_arm_side)*cos(thumb_metacarpal_side))*cos(thumb_prox_side))*sin(thumb_inter_side))*sin(thumb_inter_bend) + (((((-sin(fore_arm_bend)*sin(hind_arm_side)*cos(hind_arm_bend) - sin(hind_arm_bend)*sin(hind_arm_side)*cos(fore_arm_bend)*cos(fore_arm_side))*cos(thumb_metacarpal_side) + sin(fore_arm_side)*sin(hind_arm_bend)*sin(hind_arm_side)*sin(thumb_metacarpal_side))*cos(thumb_metacarpal_bend) - (-sin(fore_arm_bend)*sin(hind_arm_bend)*sin(hind_arm_side)*cos(fore_arm_side) + sin(hind_arm_side)*cos(fore_arm_bend)*cos(hind_arm_bend))*sin(thumb_metacarpal_bend))*cos(thumb_prox_side) + (-(-sin(fore_arm_bend)*sin(hind_arm_side)*cos(hind_arm_bend) - sin(hind_arm_bend)*sin(hind_arm_side)*cos(fore_arm_bend)*cos(fore_arm_side))*sin(thumb_metacarpal_side) + sin(fore_arm_side)*sin(hind_arm_bend)*sin(hind_arm_side)*cos(thumb_metacarpal_side))*sin(thumb_prox_side))*sin(thumb_prox_bend) + (((-sin(fore_arm_bend)*sin(hind_arm_side)*cos(hind_arm_bend) - sin(hind_arm_bend)*sin(hind_arm_side)*cos(fore_arm_bend)*cos(fore_arm_side))*cos(thumb_metacarpal_side) + sin(fore_arm_side)*sin(hind_arm_bend)*sin(hind_arm_side)*sin(thumb_metacarpal_side))*sin(thumb_metacarpal_bend) + (-sin(fore_arm_bend)*sin(hind_arm_bend)*sin(hind_arm_side)*cos(fore_arm_side) + sin(hind_arm_side)*cos(fore_arm_bend)*cos(hind_arm_bend))*cos(thumb_metacarpal_bend))*cos(thumb_prox_bend))*cos(thumb_inter_bend)) + root_scale*thumb_inter_length*(((((((-sin(fore_arm_bend)*sin(hind_arm_side)*cos(hind_arm_bend) - sin(hind_arm_bend)*sin(hind_arm_side)*cos(fore_arm_bend)*cos(fore_arm_side))*cos(thumb_metacarpal_side) + sin(fore_arm_side)*sin(hind_arm_bend)*sin(hind_arm_side)*sin(thumb_metacarpal_side))*cos(thumb_metacarpal_bend) - (-sin(fore_arm_bend)*sin(hind_arm_bend)*sin(hind_arm_side)*cos(fore_arm_side) + sin(hind_arm_side)*cos(fore_arm_bend)*cos(hind_arm_bend))*sin(thumb_metacarpal_bend))*cos(thumb_prox_side) + (-(-sin(fore_arm_bend)*sin(hind_arm_side)*cos(hind_arm_bend) - sin(hind_arm_bend)*sin(hind_arm_side)*cos(fore_arm_bend)*cos(fore_arm_side))*sin(thumb_metacarpal_side) + sin(fore_arm_side)*sin(hind_arm_bend)*sin(hind_arm_side)*cos(thumb_metacarpal_side))*sin(thumb_prox_side))*cos(thumb_prox_bend) - (((-sin(fore_arm_bend)*sin(hind_arm_side)*cos(hind_arm_bend) - sin(hind_arm_bend)*sin(hind_arm_side)*cos(fore_arm_bend)*cos(fore_arm_side))*cos(thumb_metacarpal_side) + sin(fore_arm_side)*sin(hind_arm_bend)*sin(hind_arm_side)*sin(thumb_metacarpal_side))*sin(thumb_metacarpal_bend) + (-sin(fore_arm_bend)*sin(hind_arm_bend)*sin(hind_arm_side)*cos(fore_arm_side) + sin(hind_arm_side)*cos(fore_arm_bend)*cos(hind_arm_bend))*cos(thumb_metacarpal_bend))*sin(thumb_prox_bend))*cos(thumb_inter_side) + (-(((-sin(fore_arm_bend)*sin(hind_arm_side)*cos(hind_arm_bend) - sin(hind_arm_bend)*sin(hind_arm_side)*cos(fore_arm_bend)*cos(fore_arm_side))*cos(thumb_metacarpal_side) + sin(fore_arm_side)*sin(hind_arm_bend)*sin(hind_arm_side)*sin(thumb_metacarpal_side))*cos(thumb_metacarpal_bend) - (-sin(fore_arm_bend)*sin(hind_arm_bend)*sin(hind_arm_side)*cos(fore_arm_side) + sin(hind_arm_side)*cos(fore_arm_bend)*cos(hind_arm_bend))*sin(thumb_metacarpal_bend))*sin(thumb_prox_side) + (-(-sin(fore_arm_bend)*sin(hind_arm_side)*cos(hind_arm_bend) - sin(hind_arm_bend)*sin(hind_arm_side)*cos(fore_arm_bend)*cos(fore_arm_side))*sin(thumb_metacarpal_side) + sin(fore_arm_side)*sin(hind_arm_bend)*sin(hind_arm_side)*cos(thumb_metacarpal_side))*cos(thumb_prox_side))*sin(thumb_inter_side))*cos(thumb_inter_bend) - (((((-sin(fore_arm_bend)*sin(hind_arm_side)*cos(hind_arm_bend) - sin(hind_arm_bend)*sin(hind_arm_side)*cos(fore_arm_bend)*cos(fore_arm_side))*cos(thumb_metacarpal_side) + sin(fore_arm_side)*sin(hind_arm_bend)*sin(hind_arm_side)*sin(thumb_metacarpal_side))*cos(thumb_metacarpal_bend) - (-sin(fore_arm_bend)*sin(hind_arm_bend)*sin(hind_arm_side)*cos(fore_arm_side) + sin(hind_arm_side)*cos(fore_arm_bend)*cos(hind_arm_bend))*sin(thumb_metacarpal_bend))*cos(thumb_prox_side) + (-(-sin(fore_arm_bend)*sin(hind_arm_side)*cos(hind_arm_bend) - sin(hind_arm_bend)*sin(hind_arm_side)*cos(fore_arm_bend)*cos(fore_arm_side))*sin(thumb_metacarpal_side) + sin(fore_arm_side)*sin(hind_arm_bend)*sin(hind_arm_side)*cos(thumb_metacarpal_side))*sin(thumb_prox_side))*sin(thumb_prox_bend) + (((-sin(fore_arm_bend)*sin(hind_arm_side)*cos(hind_arm_bend) - sin(hind_arm_bend)*sin(hind_arm_side)*cos(fore_arm_bend)*cos(fore_arm_side))*cos(thumb_metacarpal_side) + sin(fore_arm_side)*sin(hind_arm_bend)*sin(hind_arm_side)*sin(thumb_metacarpal_side))*sin(thumb_metacarpal_bend) + (-sin(fore_arm_bend)*sin(hind_arm_bend)*sin(hind_arm_side)*cos(fore_arm_side) + sin(hind_arm_side)*cos(fore_arm_bend)*cos(hind_arm_bend))*cos(thumb_metacarpal_bend))*cos(thumb_prox_bend))*sin(thumb_inter_bend)) + root_scale*thumb_metacarpal_length*(((-sin(fore_arm_bend)*sin(hind_arm_side)*cos(hind_arm_bend) - sin(hind_arm_bend)*sin(hind_arm_side)*cos(fore_arm_bend)*cos(fore_arm_side))*cos(thumb_metacarpal_side) + sin(fore_arm_side)*sin(hind_arm_bend)*sin(hind_arm_side)*sin(thumb_metacarpal_side))*cos(thumb_metacarpal_bend) - (-sin(fore_arm_bend)*sin(hind_arm_bend)*sin(hind_arm_side)*cos(fore_arm_side) + sin(hind_arm_side)*cos(fore_arm_bend)*cos(hind_arm_bend))*sin(thumb_metacarpal_bend)) + root_scale*thumb_prox_length*(((((-sin(fore_arm_bend)*sin(hind_arm_side)*cos(hind_arm_bend) - sin(hind_arm_bend)*sin(hind_arm_side)*cos(fore_arm_bend)*cos(fore_arm_side))*cos(thumb_metacarpal_side) + sin(fore_arm_side)*sin(hind_arm_bend)*sin(hind_arm_side)*sin(thumb_metacarpal_side))*cos(thumb_metacarpal_bend) - (-sin(fore_arm_bend)*sin(hind_arm_bend)*sin(hind_arm_side)*cos(fore_arm_side) + sin(hind_arm_side)*cos(fore_arm_bend)*cos(hind_arm_bend))*sin(thumb_metacarpal_bend))*cos(thumb_prox_side) + (-(-sin(fore_arm_bend)*sin(hind_arm_side)*cos(hind_arm_bend) - sin(hind_arm_bend)*sin(hind_arm_side)*cos(fore_arm_bend)*cos(fore_arm_side))*sin(thumb_metacarpal_side) + sin(fore_arm_side)*sin(hind_arm_bend)*sin(hind_arm_side)*cos(thumb_metacarpal_side))*sin(thumb_prox_side))*cos(thumb_prox_bend) - (((-sin(fore_arm_bend)*sin(hind_arm_side)*cos(hind_arm_bend) - sin(hind_arm_bend)*sin(hind_arm_side)*cos(fore_arm_bend)*cos(fore_arm_side))*cos(thumb_metacarpal_side) + sin(fore_arm_side)*sin(hind_arm_bend)*sin(hind_arm_side)*sin(thumb_metacarpal_side))*sin(thumb_metacarpal_bend) + (-sin(fore_arm_bend)*sin(hind_arm_bend)*sin(hind_arm_side)*cos(fore_arm_side) + sin(hind_arm_side)*cos(fore_arm_bend)*cos(hind_arm_bend))*cos(thumb_metacarpal_bend))*sin(thumb_prox_bend));
   return thumb_inter_hind_arm_bend_1_result;

}
