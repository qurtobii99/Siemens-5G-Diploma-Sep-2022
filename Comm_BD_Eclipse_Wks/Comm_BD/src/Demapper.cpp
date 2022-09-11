/*
 * Demapper.cpp
 *
 *  Created on: Sep 8, 2022
 *      Author: qurtobii99
 */

#include "../headers/Demapper.h"

Demapper::Demapper() :demapperOut(0)  {
	// TODO Auto-generated constructor stub

}

Demapper::~Demapper() {
	// TODO Auto-generated destructor stub
}


void Demapper::Demapper_TurnOn(const uint8* ptr2DescramblerOutput)
{
	for(int i=0;i<8;i++)
	{
		for(int j=0;j<8;j++)
		{
			if(ptr2DescramblerOutput[i] & (1<<j))
				demapperOut[i*8+j] = 1;
			else
			{
				/* The bit is 0, and I have initialized the setbit wiht zero, so I will do nothing */
			}
		}
	}
}

std::bitset<DEMAPPER_OUT_BITS> Demapper::Demapper_GetOut()
{
	return demapperOut;
}

void Demapper::Demapper_PrintOutput()
{
	std::cout<< "Demapper output: " << demapperOut <<std::endl;

}











