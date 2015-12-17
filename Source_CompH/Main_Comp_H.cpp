///////////////////////////////////////////////////////////////////////////////
// Company:        ENSIMAG
// Engineer:       Yu Wanwan, Fondevilla Mathieu
// 
// Create Date:    20:15:32 05/12/2015 
// Design Name: 
// Module Name:    MAIN program for Catapult C 
// Project Name:   JPEG2000 compression HLS
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//TODO : Faire d'abord sans les "petits carrés" d'image
//             Faire des loops adaptés
//TODO : Pour l'instant simplement avec ADD & DIFF
//
////////////////////////////////////////////////////////////////////////////////
#include "Main_Comp_H.h"
#include "Mem_Ram.h"
#include "ac_int.h"


//a virer pour la synthese
//#include <iostream>
//using namespace std;

#pragma design top

void Comp_H (ac_int<8, false> Data[256*512], ac_int<8, false> Comp[256*512]) {

		ac_int<9,false> x;
		ac_int<8,false> y;
		ac_int<17,false> a1;
		ac_int<17,false> a2;
		ac_int<17,false> a3;		
	
hsplit_x : for (y = 0; y < (HEIGHT_IMAGE)/2; y++) {
hsplit_y : for (x = 0; x < WIDTH_IMAGE; x++) {
    
				   a1 = (512*y) + x;
				   a2 = (512*(2*y)) + x;
				   a3 = (512*(2*y+1)) + x;
				   Comp[a1] = (Data[a2]	+ Data[a3]) /2;								
                            
                            // TODO : Valeur absolue        
                                    a1 = (512*(y + HEIGHT_IMAGE/2)) + x;
                                    if (Data[a2] > 	Data[a3]) Comp[a1] = (Data[a2]	- Data[a3]) /2;
                                    else Comp[a1] = (Data[a3]	- Data[a2]) /2;
		   }
		   }

}
