////////////////////////////////////////////////////////////////////////////////
// Company:        ENSIMAG
// Engineer:       Hans Julien, Perraud Frédéric
// 
// Create Date:    08:11:44 11/10/2015 
// Design Name: 
// Module Name:    Mémoire RAM for test Catapult C 
// Project Name:   pedestre detection HLS
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 1.01 - Values for pattern
// Additional Comments: 
//
////////////////////////////////////////////////////////////////////////////////
#ifndef MEM_RAM_H
#define MEM_RAM_H

#include "ac_int.h"

#define WIDTH_IMAGE  320
#define HEIGHT_IMAGE 240
#define WIDTH_VGA    512
#define HEIGHT_VGA   256
#define CELL_WIDTH   4
#define CELL_HEIGHT  4
#define CELL_SIZE    16

static  const ac_int<8,false> patern[CELL_SIZE][CELL_SIZE] = {
  {0,157,159,0,0,157,159,0,0,157,159,0,0,157,159,0},
  {6,255,64,0,1,204,116,0,0,119,202,0,0,66,255,4},
  {125,255,15,0,9,244,88,0,0,95,242,6,0,16,255,101},
  {255,235,1,0,63,255,71,0,0,81,255,47,0,2,239,255},
  {255,147,0,0,163,255,65,0,0,77,255,139,0,0,159,255},
  {255,49,0,0,246,255,69,3,6,85,255,226,0,0,62,255},
  {82,5,0,0,255,231,84,17,26,104,250,255,0,0,9,118},
  {3,0,0,0,239,184,108,60,82,134,212,255,0,0,0,6},
  {0,0,0,0,159,159,159,159,157,157,157,157,0,0,0,0},
  {0,0,0,4,64,116,202,255,255,204,119,66,6,1,0,0},
  {0,0,6,101,15,88,242,255,255,244,95,16,125,9,0,0},
  {0,0,47,255,1,71,255,239,235,255,81,2,255,63,0,0},
  {0,0,139,255,0,65,255,159,147,255,77,0,255,163,0,0},
  {0,3,226,255,0,69,255,62,49,255,85,0,255,246,6,0},
  {0,17,255,118,0,84,250,9,5,231,104,0,82,255,26,0},
  {0,60,255,6,0,108,212,0,0,184,134,0,3,239,82,0}};

#define PRECISION_RACINE 18
#define PRECISION_ATAN   256
#define N_CLASSES        16


//linear approximation of sqrt
const unsigned int mysqrt[]  = {0,1,1,2,3,4,6,8,11,16,23,32,45,64,91,128,181,
				256,362};
//value for main arctan
const unsigned int arctan[]  = {25,78,137,210,312,479,844,2599};

//linear approximation of division
const unsigned int inverse[] = {1024,512,341,256,204,170,146,128,113,102,93,85,
				78,73,68,64,60,56,53,51,48,46,44,42,40,39,37,36,
				35,34,33,32,31,30,29,28,27,26,26,25,24,24,23,
				23,22,22,21,21,20,20,20,19,19,18,18,18,17,17,
				17,17,16,16,16,16,15,15,15,15,14,14,14,14,14,
				13,13,13,13,13,12,12,12,12,12,12,12,11,11,11,
				11,11,11,11,11,10,10,10,10,10,10,10,10,10,9,9,
				9,9,9,9,9,9,9,9,9,8,8,8,8,8,8,8,8,8,8,8,8,
				8,8,8,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,
				6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,
				6,6,6,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
				5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,4,4,4,4,4,
				4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,
				4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,
				4,4,4,4};


//a cell
static ac_int<12, false> cell[CELL_SIZE];

#endif

