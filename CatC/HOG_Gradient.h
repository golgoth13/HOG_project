////////////////////////////////////////////////////////////////////////////////
// Company:        ENSIMAG
// Engineer:       Hans Julien, Perraud Frédéric
// 
// Create Date:    08:11:44 11/10/2015 
// Design Name: 
// Module Name:    Gradient calculation 
// Project Name:   pedestre detection HLS
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
////////////////////////////////////////////////////////////////////////////////
#include "Mem_Ram.h"
#include "ac_int.h"

void gradient_hor(ac_int<9> coord_x,
		  ac_int<8> coord_y,
		  ac_int<8> *gradient_h);

void gradient_ver(ac_int<9> coord_x,
		  ac_int<8> coord_y,
		  ac_int<8> *gradient_v);

void gradient_pixel(ac_int<9> coord_x,
		    ac_int<8> coord_y,
		    ac_int<16> *gradient_p);