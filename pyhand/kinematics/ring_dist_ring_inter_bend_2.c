/******************************************************************************
 *                      Code generated with sympy 0.7.6                       *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                       This file is part of 'project'                       *
 ******************************************************************************/
#include "ring_dist_ring_inter_bend_2.h"
#include <math.h>

double ring_dist_ring_inter_bend_2(double fore_arm_bend, double fore_arm_side, double hind_arm_bend, double local_x, double local_y, double local_z, double ring_dist_bend, double ring_dist_length, double ring_dist_side, double ring_inter_bend, double ring_inter_length, double ring_inter_side, double ring_metacarpal_bend, double ring_metacarpal_side, double ring_prox_bend, double ring_prox_side, double root_scale) {

   double ring_dist_ring_inter_bend_2_result;
   ring_dist_ring_inter_bend_2_result = local_x*((-((((((-sin(fore_arm_bend)*cos(hind_arm_bend) - sin(hind_arm_bend)*cos(fore_arm_bend)*cos(fore_arm_side))*cos(ring_metacarpal_side) + sin(fore_arm_side)*sin(hind_arm_bend)*sin(ring_metacarpal_side))*cos(ring_metacarpal_bend) - (-sin(fore_arm_bend)*sin(hind_arm_bend)*cos(fore_arm_side) + cos(fore_arm_bend)*cos(hind_arm_bend))*sin(ring_metacarpal_bend))*cos(ring_prox_side) + (-(-sin(fore_arm_bend)*cos(hind_arm_bend) - sin(hind_arm_bend)*cos(fore_arm_bend)*cos(fore_arm_side))*sin(ring_metacarpal_side) + sin(fore_arm_side)*sin(hind_arm_bend)*cos(ring_metacarpal_side))*sin(ring_prox_side))*cos(ring_prox_bend) - (((-sin(fore_arm_bend)*cos(hind_arm_bend) - sin(hind_arm_bend)*cos(fore_arm_bend)*cos(fore_arm_side))*cos(ring_metacarpal_side) + sin(fore_arm_side)*sin(hind_arm_bend)*sin(ring_metacarpal_side))*sin(ring_metacarpal_bend) + (-sin(fore_arm_bend)*sin(hind_arm_bend)*cos(fore_arm_side) + cos(fore_arm_bend)*cos(hind_arm_bend))*cos(ring_metacarpal_bend))*sin(ring_prox_bend))*cos(ring_inter_side) + (-(((-sin(fore_arm_bend)*cos(hind_arm_bend) - sin(hind_arm_bend)*cos(fore_arm_bend)*cos(fore_arm_side))*cos(ring_metacarpal_side) + sin(fore_arm_side)*sin(hind_arm_bend)*sin(ring_metacarpal_side))*cos(ring_metacarpal_bend) - (-sin(fore_arm_bend)*sin(hind_arm_bend)*cos(fore_arm_side) + cos(fore_arm_bend)*cos(hind_arm_bend))*sin(ring_metacarpal_bend))*sin(ring_prox_side) + (-(-sin(fore_arm_bend)*cos(hind_arm_bend) - sin(hind_arm_bend)*cos(fore_arm_bend)*cos(fore_arm_side))*sin(ring_metacarpal_side) + sin(fore_arm_side)*sin(hind_arm_bend)*cos(ring_metacarpal_side))*cos(ring_prox_side))*sin(ring_inter_side))*sin(ring_inter_bend) - (((((-sin(fore_arm_bend)*cos(hind_arm_bend) - sin(hind_arm_bend)*cos(fore_arm_bend)*cos(fore_arm_side))*cos(ring_metacarpal_side) + sin(fore_arm_side)*sin(hind_arm_bend)*sin(ring_metacarpal_side))*cos(ring_metacarpal_bend) - (-sin(fore_arm_bend)*sin(hind_arm_bend)*cos(fore_arm_side) + cos(fore_arm_bend)*cos(hind_arm_bend))*sin(ring_metacarpal_bend))*cos(ring_prox_side) + (-(-sin(fore_arm_bend)*cos(hind_arm_bend) - sin(hind_arm_bend)*cos(fore_arm_bend)*cos(fore_arm_side))*sin(ring_metacarpal_side) + sin(fore_arm_side)*sin(hind_arm_bend)*cos(ring_metacarpal_side))*sin(ring_prox_side))*sin(ring_prox_bend) + (((-sin(fore_arm_bend)*cos(hind_arm_bend) - sin(hind_arm_bend)*cos(fore_arm_bend)*cos(fore_arm_side))*cos(ring_metacarpal_side) + sin(fore_arm_side)*sin(hind_arm_bend)*sin(ring_metacarpal_side))*sin(ring_metacarpal_bend) + (-sin(fore_arm_bend)*sin(hind_arm_bend)*cos(fore_arm_side) + cos(fore_arm_bend)*cos(hind_arm_bend))*cos(ring_metacarpal_bend))*cos(ring_prox_bend))*cos(ring_inter_bend))*cos(ring_dist_bend)*cos(ring_dist_side) - (((((((-sin(fore_arm_bend)*cos(hind_arm_bend) - sin(hind_arm_bend)*cos(fore_arm_bend)*cos(fore_arm_side))*cos(ring_metacarpal_side) + sin(fore_arm_side)*sin(hind_arm_bend)*sin(ring_metacarpal_side))*cos(ring_metacarpal_bend) - (-sin(fore_arm_bend)*sin(hind_arm_bend)*cos(fore_arm_side) + cos(fore_arm_bend)*cos(hind_arm_bend))*sin(ring_metacarpal_bend))*cos(ring_prox_side) + (-(-sin(fore_arm_bend)*cos(hind_arm_bend) - sin(hind_arm_bend)*cos(fore_arm_bend)*cos(fore_arm_side))*sin(ring_metacarpal_side) + sin(fore_arm_side)*sin(hind_arm_bend)*cos(ring_metacarpal_side))*sin(ring_prox_side))*cos(ring_prox_bend) - (((-sin(fore_arm_bend)*cos(hind_arm_bend) - sin(hind_arm_bend)*cos(fore_arm_bend)*cos(fore_arm_side))*cos(ring_metacarpal_side) + sin(fore_arm_side)*sin(hind_arm_bend)*sin(ring_metacarpal_side))*sin(ring_metacarpal_bend) + (-sin(fore_arm_bend)*sin(hind_arm_bend)*cos(fore_arm_side) + cos(fore_arm_bend)*cos(hind_arm_bend))*cos(ring_metacarpal_bend))*sin(ring_prox_bend))*cos(ring_inter_side) + (-(((-sin(fore_arm_bend)*cos(hind_arm_bend) - sin(hind_arm_bend)*cos(fore_arm_bend)*cos(fore_arm_side))*cos(ring_metacarpal_side) + sin(fore_arm_side)*sin(hind_arm_bend)*sin(ring_metacarpal_side))*cos(ring_metacarpal_bend) - (-sin(fore_arm_bend)*sin(hind_arm_bend)*cos(fore_arm_side) + cos(fore_arm_bend)*cos(hind_arm_bend))*sin(ring_metacarpal_bend))*sin(ring_prox_side) + (-(-sin(fore_arm_bend)*cos(hind_arm_bend) - sin(hind_arm_bend)*cos(fore_arm_bend)*cos(fore_arm_side))*sin(ring_metacarpal_side) + sin(fore_arm_side)*sin(hind_arm_bend)*cos(ring_metacarpal_side))*cos(ring_prox_side))*sin(ring_inter_side))*cos(ring_inter_bend) - (((((-sin(fore_arm_bend)*cos(hind_arm_bend) - sin(hind_arm_bend)*cos(fore_arm_bend)*cos(fore_arm_side))*cos(ring_metacarpal_side) + sin(fore_arm_side)*sin(hind_arm_bend)*sin(ring_metacarpal_side))*cos(ring_metacarpal_bend) - (-sin(fore_arm_bend)*sin(hind_arm_bend)*cos(fore_arm_side) + cos(fore_arm_bend)*cos(hind_arm_bend))*sin(ring_metacarpal_bend))*cos(ring_prox_side) + (-(-sin(fore_arm_bend)*cos(hind_arm_bend) - sin(hind_arm_bend)*cos(fore_arm_bend)*cos(fore_arm_side))*sin(ring_metacarpal_side) + sin(fore_arm_side)*sin(hind_arm_bend)*cos(ring_metacarpal_side))*sin(ring_prox_side))*sin(ring_prox_bend) + (((-sin(fore_arm_bend)*cos(hind_arm_bend) - sin(hind_arm_bend)*cos(fore_arm_bend)*cos(fore_arm_side))*cos(ring_metacarpal_side) + sin(fore_arm_side)*sin(hind_arm_bend)*sin(ring_metacarpal_side))*sin(ring_metacarpal_bend) + (-sin(fore_arm_bend)*sin(hind_arm_bend)*cos(fore_arm_side) + cos(fore_arm_bend)*cos(hind_arm_bend))*cos(ring_metacarpal_bend))*cos(ring_prox_bend))*sin(ring_inter_bend))*sin(ring_dist_bend)) - local_y*(-((((((-sin(fore_arm_bend)*cos(hind_arm_bend) - sin(hind_arm_bend)*cos(fore_arm_bend)*cos(fore_arm_side))*cos(ring_metacarpal_side) + sin(fore_arm_side)*sin(hind_arm_bend)*sin(ring_metacarpal_side))*cos(ring_metacarpal_bend) - (-sin(fore_arm_bend)*sin(hind_arm_bend)*cos(fore_arm_side) + cos(fore_arm_bend)*cos(hind_arm_bend))*sin(ring_metacarpal_bend))*cos(ring_prox_side) + (-(-sin(fore_arm_bend)*cos(hind_arm_bend) - sin(hind_arm_bend)*cos(fore_arm_bend)*cos(fore_arm_side))*sin(ring_metacarpal_side) + sin(fore_arm_side)*sin(hind_arm_bend)*cos(ring_metacarpal_side))*sin(ring_prox_side))*cos(ring_prox_bend) - (((-sin(fore_arm_bend)*cos(hind_arm_bend) - sin(hind_arm_bend)*cos(fore_arm_bend)*cos(fore_arm_side))*cos(ring_metacarpal_side) + sin(fore_arm_side)*sin(hind_arm_bend)*sin(ring_metacarpal_side))*sin(ring_metacarpal_bend) + (-sin(fore_arm_bend)*sin(hind_arm_bend)*cos(fore_arm_side) + cos(fore_arm_bend)*cos(hind_arm_bend))*cos(ring_metacarpal_bend))*sin(ring_prox_bend))*cos(ring_inter_side) + (-(((-sin(fore_arm_bend)*cos(hind_arm_bend) - sin(hind_arm_bend)*cos(fore_arm_bend)*cos(fore_arm_side))*cos(ring_metacarpal_side) + sin(fore_arm_side)*sin(hind_arm_bend)*sin(ring_metacarpal_side))*cos(ring_metacarpal_bend) - (-sin(fore_arm_bend)*sin(hind_arm_bend)*cos(fore_arm_side) + cos(fore_arm_bend)*cos(hind_arm_bend))*sin(ring_metacarpal_bend))*sin(ring_prox_side) + (-(-sin(fore_arm_bend)*cos(hind_arm_bend) - sin(hind_arm_bend)*cos(fore_arm_bend)*cos(fore_arm_side))*sin(ring_metacarpal_side) + sin(fore_arm_side)*sin(hind_arm_bend)*cos(ring_metacarpal_side))*cos(ring_prox_side))*sin(ring_inter_side))*sin(ring_inter_bend) - (((((-sin(fore_arm_bend)*cos(hind_arm_bend) - sin(hind_arm_bend)*cos(fore_arm_bend)*cos(fore_arm_side))*cos(ring_metacarpal_side) + sin(fore_arm_side)*sin(hind_arm_bend)*sin(ring_metacarpal_side))*cos(ring_metacarpal_bend) - (-sin(fore_arm_bend)*sin(hind_arm_bend)*cos(fore_arm_side) + cos(fore_arm_bend)*cos(hind_arm_bend))*sin(ring_metacarpal_bend))*cos(ring_prox_side) + (-(-sin(fore_arm_bend)*cos(hind_arm_bend) - sin(hind_arm_bend)*cos(fore_arm_bend)*cos(fore_arm_side))*sin(ring_metacarpal_side) + sin(fore_arm_side)*sin(hind_arm_bend)*cos(ring_metacarpal_side))*sin(ring_prox_side))*sin(ring_prox_bend) + (((-sin(fore_arm_bend)*cos(hind_arm_bend) - sin(hind_arm_bend)*cos(fore_arm_bend)*cos(fore_arm_side))*cos(ring_metacarpal_side) + sin(fore_arm_side)*sin(hind_arm_bend)*sin(ring_metacarpal_side))*sin(ring_metacarpal_bend) + (-sin(fore_arm_bend)*sin(hind_arm_bend)*cos(fore_arm_side) + cos(fore_arm_bend)*cos(hind_arm_bend))*cos(ring_metacarpal_bend))*cos(ring_prox_bend))*cos(ring_inter_bend))*sin(ring_dist_side) + local_z*((-((((((-sin(fore_arm_bend)*cos(hind_arm_bend) - sin(hind_arm_bend)*cos(fore_arm_bend)*cos(fore_arm_side))*cos(ring_metacarpal_side) + sin(fore_arm_side)*sin(hind_arm_bend)*sin(ring_metacarpal_side))*cos(ring_metacarpal_bend) - (-sin(fore_arm_bend)*sin(hind_arm_bend)*cos(fore_arm_side) + cos(fore_arm_bend)*cos(hind_arm_bend))*sin(ring_metacarpal_bend))*cos(ring_prox_side) + (-(-sin(fore_arm_bend)*cos(hind_arm_bend) - sin(hind_arm_bend)*cos(fore_arm_bend)*cos(fore_arm_side))*sin(ring_metacarpal_side) + sin(fore_arm_side)*sin(hind_arm_bend)*cos(ring_metacarpal_side))*sin(ring_prox_side))*cos(ring_prox_bend) - (((-sin(fore_arm_bend)*cos(hind_arm_bend) - sin(hind_arm_bend)*cos(fore_arm_bend)*cos(fore_arm_side))*cos(ring_metacarpal_side) + sin(fore_arm_side)*sin(hind_arm_bend)*sin(ring_metacarpal_side))*sin(ring_metacarpal_bend) + (-sin(fore_arm_bend)*sin(hind_arm_bend)*cos(fore_arm_side) + cos(fore_arm_bend)*cos(hind_arm_bend))*cos(ring_metacarpal_bend))*sin(ring_prox_bend))*cos(ring_inter_side) + (-(((-sin(fore_arm_bend)*cos(hind_arm_bend) - sin(hind_arm_bend)*cos(fore_arm_bend)*cos(fore_arm_side))*cos(ring_metacarpal_side) + sin(fore_arm_side)*sin(hind_arm_bend)*sin(ring_metacarpal_side))*cos(ring_metacarpal_bend) - (-sin(fore_arm_bend)*sin(hind_arm_bend)*cos(fore_arm_side) + cos(fore_arm_bend)*cos(hind_arm_bend))*sin(ring_metacarpal_bend))*sin(ring_prox_side) + (-(-sin(fore_arm_bend)*cos(hind_arm_bend) - sin(hind_arm_bend)*cos(fore_arm_bend)*cos(fore_arm_side))*sin(ring_metacarpal_side) + sin(fore_arm_side)*sin(hind_arm_bend)*cos(ring_metacarpal_side))*cos(ring_prox_side))*sin(ring_inter_side))*sin(ring_inter_bend) - (((((-sin(fore_arm_bend)*cos(hind_arm_bend) - sin(hind_arm_bend)*cos(fore_arm_bend)*cos(fore_arm_side))*cos(ring_metacarpal_side) + sin(fore_arm_side)*sin(hind_arm_bend)*sin(ring_metacarpal_side))*cos(ring_metacarpal_bend) - (-sin(fore_arm_bend)*sin(hind_arm_bend)*cos(fore_arm_side) + cos(fore_arm_bend)*cos(hind_arm_bend))*sin(ring_metacarpal_bend))*cos(ring_prox_side) + (-(-sin(fore_arm_bend)*cos(hind_arm_bend) - sin(hind_arm_bend)*cos(fore_arm_bend)*cos(fore_arm_side))*sin(ring_metacarpal_side) + sin(fore_arm_side)*sin(hind_arm_bend)*cos(ring_metacarpal_side))*sin(ring_prox_side))*sin(ring_prox_bend) + (((-sin(fore_arm_bend)*cos(hind_arm_bend) - sin(hind_arm_bend)*cos(fore_arm_bend)*cos(fore_arm_side))*cos(ring_metacarpal_side) + sin(fore_arm_side)*sin(hind_arm_bend)*sin(ring_metacarpal_side))*sin(ring_metacarpal_bend) + (-sin(fore_arm_bend)*sin(hind_arm_bend)*cos(fore_arm_side) + cos(fore_arm_bend)*cos(hind_arm_bend))*cos(ring_metacarpal_bend))*cos(ring_prox_bend))*cos(ring_inter_bend))*sin(ring_dist_bend)*cos(ring_dist_side) + (((((((-sin(fore_arm_bend)*cos(hind_arm_bend) - sin(hind_arm_bend)*cos(fore_arm_bend)*cos(fore_arm_side))*cos(ring_metacarpal_side) + sin(fore_arm_side)*sin(hind_arm_bend)*sin(ring_metacarpal_side))*cos(ring_metacarpal_bend) - (-sin(fore_arm_bend)*sin(hind_arm_bend)*cos(fore_arm_side) + cos(fore_arm_bend)*cos(hind_arm_bend))*sin(ring_metacarpal_bend))*cos(ring_prox_side) + (-(-sin(fore_arm_bend)*cos(hind_arm_bend) - sin(hind_arm_bend)*cos(fore_arm_bend)*cos(fore_arm_side))*sin(ring_metacarpal_side) + sin(fore_arm_side)*sin(hind_arm_bend)*cos(ring_metacarpal_side))*sin(ring_prox_side))*cos(ring_prox_bend) - (((-sin(fore_arm_bend)*cos(hind_arm_bend) - sin(hind_arm_bend)*cos(fore_arm_bend)*cos(fore_arm_side))*cos(ring_metacarpal_side) + sin(fore_arm_side)*sin(hind_arm_bend)*sin(ring_metacarpal_side))*sin(ring_metacarpal_bend) + (-sin(fore_arm_bend)*sin(hind_arm_bend)*cos(fore_arm_side) + cos(fore_arm_bend)*cos(hind_arm_bend))*cos(ring_metacarpal_bend))*sin(ring_prox_bend))*cos(ring_inter_side) + (-(((-sin(fore_arm_bend)*cos(hind_arm_bend) - sin(hind_arm_bend)*cos(fore_arm_bend)*cos(fore_arm_side))*cos(ring_metacarpal_side) + sin(fore_arm_side)*sin(hind_arm_bend)*sin(ring_metacarpal_side))*cos(ring_metacarpal_bend) - (-sin(fore_arm_bend)*sin(hind_arm_bend)*cos(fore_arm_side) + cos(fore_arm_bend)*cos(hind_arm_bend))*sin(ring_metacarpal_bend))*sin(ring_prox_side) + (-(-sin(fore_arm_bend)*cos(hind_arm_bend) - sin(hind_arm_bend)*cos(fore_arm_bend)*cos(fore_arm_side))*sin(ring_metacarpal_side) + sin(fore_arm_side)*sin(hind_arm_bend)*cos(ring_metacarpal_side))*cos(ring_prox_side))*sin(ring_inter_side))*cos(ring_inter_bend) - (((((-sin(fore_arm_bend)*cos(hind_arm_bend) - sin(hind_arm_bend)*cos(fore_arm_bend)*cos(fore_arm_side))*cos(ring_metacarpal_side) + sin(fore_arm_side)*sin(hind_arm_bend)*sin(ring_metacarpal_side))*cos(ring_metacarpal_bend) - (-sin(fore_arm_bend)*sin(hind_arm_bend)*cos(fore_arm_side) + cos(fore_arm_bend)*cos(hind_arm_bend))*sin(ring_metacarpal_bend))*cos(ring_prox_side) + (-(-sin(fore_arm_bend)*cos(hind_arm_bend) - sin(hind_arm_bend)*cos(fore_arm_bend)*cos(fore_arm_side))*sin(ring_metacarpal_side) + sin(fore_arm_side)*sin(hind_arm_bend)*cos(ring_metacarpal_side))*sin(ring_prox_side))*sin(ring_prox_bend) + (((-sin(fore_arm_bend)*cos(hind_arm_bend) - sin(hind_arm_bend)*cos(fore_arm_bend)*cos(fore_arm_side))*cos(ring_metacarpal_side) + sin(fore_arm_side)*sin(hind_arm_bend)*sin(ring_metacarpal_side))*sin(ring_metacarpal_bend) + (-sin(fore_arm_bend)*sin(hind_arm_bend)*cos(fore_arm_side) + cos(fore_arm_bend)*cos(hind_arm_bend))*cos(ring_metacarpal_bend))*cos(ring_prox_bend))*sin(ring_inter_bend))*cos(ring_dist_bend)) + ring_dist_length*root_scale*((-((((((-sin(fore_arm_bend)*cos(hind_arm_bend) - sin(hind_arm_bend)*cos(fore_arm_bend)*cos(fore_arm_side))*cos(ring_metacarpal_side) + sin(fore_arm_side)*sin(hind_arm_bend)*sin(ring_metacarpal_side))*cos(ring_metacarpal_bend) - (-sin(fore_arm_bend)*sin(hind_arm_bend)*cos(fore_arm_side) + cos(fore_arm_bend)*cos(hind_arm_bend))*sin(ring_metacarpal_bend))*cos(ring_prox_side) + (-(-sin(fore_arm_bend)*cos(hind_arm_bend) - sin(hind_arm_bend)*cos(fore_arm_bend)*cos(fore_arm_side))*sin(ring_metacarpal_side) + sin(fore_arm_side)*sin(hind_arm_bend)*cos(ring_metacarpal_side))*sin(ring_prox_side))*cos(ring_prox_bend) - (((-sin(fore_arm_bend)*cos(hind_arm_bend) - sin(hind_arm_bend)*cos(fore_arm_bend)*cos(fore_arm_side))*cos(ring_metacarpal_side) + sin(fore_arm_side)*sin(hind_arm_bend)*sin(ring_metacarpal_side))*sin(ring_metacarpal_bend) + (-sin(fore_arm_bend)*sin(hind_arm_bend)*cos(fore_arm_side) + cos(fore_arm_bend)*cos(hind_arm_bend))*cos(ring_metacarpal_bend))*sin(ring_prox_bend))*cos(ring_inter_side) + (-(((-sin(fore_arm_bend)*cos(hind_arm_bend) - sin(hind_arm_bend)*cos(fore_arm_bend)*cos(fore_arm_side))*cos(ring_metacarpal_side) + sin(fore_arm_side)*sin(hind_arm_bend)*sin(ring_metacarpal_side))*cos(ring_metacarpal_bend) - (-sin(fore_arm_bend)*sin(hind_arm_bend)*cos(fore_arm_side) + cos(fore_arm_bend)*cos(hind_arm_bend))*sin(ring_metacarpal_bend))*sin(ring_prox_side) + (-(-sin(fore_arm_bend)*cos(hind_arm_bend) - sin(hind_arm_bend)*cos(fore_arm_bend)*cos(fore_arm_side))*sin(ring_metacarpal_side) + sin(fore_arm_side)*sin(hind_arm_bend)*cos(ring_metacarpal_side))*cos(ring_prox_side))*sin(ring_inter_side))*sin(ring_inter_bend) - (((((-sin(fore_arm_bend)*cos(hind_arm_bend) - sin(hind_arm_bend)*cos(fore_arm_bend)*cos(fore_arm_side))*cos(ring_metacarpal_side) + sin(fore_arm_side)*sin(hind_arm_bend)*sin(ring_metacarpal_side))*cos(ring_metacarpal_bend) - (-sin(fore_arm_bend)*sin(hind_arm_bend)*cos(fore_arm_side) + cos(fore_arm_bend)*cos(hind_arm_bend))*sin(ring_metacarpal_bend))*cos(ring_prox_side) + (-(-sin(fore_arm_bend)*cos(hind_arm_bend) - sin(hind_arm_bend)*cos(fore_arm_bend)*cos(fore_arm_side))*sin(ring_metacarpal_side) + sin(fore_arm_side)*sin(hind_arm_bend)*cos(ring_metacarpal_side))*sin(ring_prox_side))*sin(ring_prox_bend) + (((-sin(fore_arm_bend)*cos(hind_arm_bend) - sin(hind_arm_bend)*cos(fore_arm_bend)*cos(fore_arm_side))*cos(ring_metacarpal_side) + sin(fore_arm_side)*sin(hind_arm_bend)*sin(ring_metacarpal_side))*sin(ring_metacarpal_bend) + (-sin(fore_arm_bend)*sin(hind_arm_bend)*cos(fore_arm_side) + cos(fore_arm_bend)*cos(hind_arm_bend))*cos(ring_metacarpal_bend))*cos(ring_prox_bend))*cos(ring_inter_bend))*cos(ring_dist_bend)*cos(ring_dist_side) - (((((((-sin(fore_arm_bend)*cos(hind_arm_bend) - sin(hind_arm_bend)*cos(fore_arm_bend)*cos(fore_arm_side))*cos(ring_metacarpal_side) + sin(fore_arm_side)*sin(hind_arm_bend)*sin(ring_metacarpal_side))*cos(ring_metacarpal_bend) - (-sin(fore_arm_bend)*sin(hind_arm_bend)*cos(fore_arm_side) + cos(fore_arm_bend)*cos(hind_arm_bend))*sin(ring_metacarpal_bend))*cos(ring_prox_side) + (-(-sin(fore_arm_bend)*cos(hind_arm_bend) - sin(hind_arm_bend)*cos(fore_arm_bend)*cos(fore_arm_side))*sin(ring_metacarpal_side) + sin(fore_arm_side)*sin(hind_arm_bend)*cos(ring_metacarpal_side))*sin(ring_prox_side))*cos(ring_prox_bend) - (((-sin(fore_arm_bend)*cos(hind_arm_bend) - sin(hind_arm_bend)*cos(fore_arm_bend)*cos(fore_arm_side))*cos(ring_metacarpal_side) + sin(fore_arm_side)*sin(hind_arm_bend)*sin(ring_metacarpal_side))*sin(ring_metacarpal_bend) + (-sin(fore_arm_bend)*sin(hind_arm_bend)*cos(fore_arm_side) + cos(fore_arm_bend)*cos(hind_arm_bend))*cos(ring_metacarpal_bend))*sin(ring_prox_bend))*cos(ring_inter_side) + (-(((-sin(fore_arm_bend)*cos(hind_arm_bend) - sin(hind_arm_bend)*cos(fore_arm_bend)*cos(fore_arm_side))*cos(ring_metacarpal_side) + sin(fore_arm_side)*sin(hind_arm_bend)*sin(ring_metacarpal_side))*cos(ring_metacarpal_bend) - (-sin(fore_arm_bend)*sin(hind_arm_bend)*cos(fore_arm_side) + cos(fore_arm_bend)*cos(hind_arm_bend))*sin(ring_metacarpal_bend))*sin(ring_prox_side) + (-(-sin(fore_arm_bend)*cos(hind_arm_bend) - sin(hind_arm_bend)*cos(fore_arm_bend)*cos(fore_arm_side))*sin(ring_metacarpal_side) + sin(fore_arm_side)*sin(hind_arm_bend)*cos(ring_metacarpal_side))*cos(ring_prox_side))*sin(ring_inter_side))*cos(ring_inter_bend) - (((((-sin(fore_arm_bend)*cos(hind_arm_bend) - sin(hind_arm_bend)*cos(fore_arm_bend)*cos(fore_arm_side))*cos(ring_metacarpal_side) + sin(fore_arm_side)*sin(hind_arm_bend)*sin(ring_metacarpal_side))*cos(ring_metacarpal_bend) - (-sin(fore_arm_bend)*sin(hind_arm_bend)*cos(fore_arm_side) + cos(fore_arm_bend)*cos(hind_arm_bend))*sin(ring_metacarpal_bend))*cos(ring_prox_side) + (-(-sin(fore_arm_bend)*cos(hind_arm_bend) - sin(hind_arm_bend)*cos(fore_arm_bend)*cos(fore_arm_side))*sin(ring_metacarpal_side) + sin(fore_arm_side)*sin(hind_arm_bend)*cos(ring_metacarpal_side))*sin(ring_prox_side))*sin(ring_prox_bend) + (((-sin(fore_arm_bend)*cos(hind_arm_bend) - sin(hind_arm_bend)*cos(fore_arm_bend)*cos(fore_arm_side))*cos(ring_metacarpal_side) + sin(fore_arm_side)*sin(hind_arm_bend)*sin(ring_metacarpal_side))*sin(ring_metacarpal_bend) + (-sin(fore_arm_bend)*sin(hind_arm_bend)*cos(fore_arm_side) + cos(fore_arm_bend)*cos(hind_arm_bend))*cos(ring_metacarpal_bend))*cos(ring_prox_bend))*sin(ring_inter_bend))*sin(ring_dist_bend)) + ring_inter_length*root_scale*(-((((((-sin(fore_arm_bend)*cos(hind_arm_bend) - sin(hind_arm_bend)*cos(fore_arm_bend)*cos(fore_arm_side))*cos(ring_metacarpal_side) + sin(fore_arm_side)*sin(hind_arm_bend)*sin(ring_metacarpal_side))*cos(ring_metacarpal_bend) - (-sin(fore_arm_bend)*sin(hind_arm_bend)*cos(fore_arm_side) + cos(fore_arm_bend)*cos(hind_arm_bend))*sin(ring_metacarpal_bend))*cos(ring_prox_side) + (-(-sin(fore_arm_bend)*cos(hind_arm_bend) - sin(hind_arm_bend)*cos(fore_arm_bend)*cos(fore_arm_side))*sin(ring_metacarpal_side) + sin(fore_arm_side)*sin(hind_arm_bend)*cos(ring_metacarpal_side))*sin(ring_prox_side))*cos(ring_prox_bend) - (((-sin(fore_arm_bend)*cos(hind_arm_bend) - sin(hind_arm_bend)*cos(fore_arm_bend)*cos(fore_arm_side))*cos(ring_metacarpal_side) + sin(fore_arm_side)*sin(hind_arm_bend)*sin(ring_metacarpal_side))*sin(ring_metacarpal_bend) + (-sin(fore_arm_bend)*sin(hind_arm_bend)*cos(fore_arm_side) + cos(fore_arm_bend)*cos(hind_arm_bend))*cos(ring_metacarpal_bend))*sin(ring_prox_bend))*cos(ring_inter_side) + (-(((-sin(fore_arm_bend)*cos(hind_arm_bend) - sin(hind_arm_bend)*cos(fore_arm_bend)*cos(fore_arm_side))*cos(ring_metacarpal_side) + sin(fore_arm_side)*sin(hind_arm_bend)*sin(ring_metacarpal_side))*cos(ring_metacarpal_bend) - (-sin(fore_arm_bend)*sin(hind_arm_bend)*cos(fore_arm_side) + cos(fore_arm_bend)*cos(hind_arm_bend))*sin(ring_metacarpal_bend))*sin(ring_prox_side) + (-(-sin(fore_arm_bend)*cos(hind_arm_bend) - sin(hind_arm_bend)*cos(fore_arm_bend)*cos(fore_arm_side))*sin(ring_metacarpal_side) + sin(fore_arm_side)*sin(hind_arm_bend)*cos(ring_metacarpal_side))*cos(ring_prox_side))*sin(ring_inter_side))*sin(ring_inter_bend) - (((((-sin(fore_arm_bend)*cos(hind_arm_bend) - sin(hind_arm_bend)*cos(fore_arm_bend)*cos(fore_arm_side))*cos(ring_metacarpal_side) + sin(fore_arm_side)*sin(hind_arm_bend)*sin(ring_metacarpal_side))*cos(ring_metacarpal_bend) - (-sin(fore_arm_bend)*sin(hind_arm_bend)*cos(fore_arm_side) + cos(fore_arm_bend)*cos(hind_arm_bend))*sin(ring_metacarpal_bend))*cos(ring_prox_side) + (-(-sin(fore_arm_bend)*cos(hind_arm_bend) - sin(hind_arm_bend)*cos(fore_arm_bend)*cos(fore_arm_side))*sin(ring_metacarpal_side) + sin(fore_arm_side)*sin(hind_arm_bend)*cos(ring_metacarpal_side))*sin(ring_prox_side))*sin(ring_prox_bend) + (((-sin(fore_arm_bend)*cos(hind_arm_bend) - sin(hind_arm_bend)*cos(fore_arm_bend)*cos(fore_arm_side))*cos(ring_metacarpal_side) + sin(fore_arm_side)*sin(hind_arm_bend)*sin(ring_metacarpal_side))*sin(ring_metacarpal_bend) + (-sin(fore_arm_bend)*sin(hind_arm_bend)*cos(fore_arm_side) + cos(fore_arm_bend)*cos(hind_arm_bend))*cos(ring_metacarpal_bend))*cos(ring_prox_bend))*cos(ring_inter_bend));
   return ring_dist_ring_inter_bend_2_result;

}
