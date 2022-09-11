/*
 * Scrambler.cpp
 *
 *  Created on: Sep 8, 2022
 *      Author: qurtobii99
 */

#include "../headers/Scrambler.h"

Scrambler::Scrambler() {
	// TODO Auto-generated constructor stub

}

Scrambler::~Scrambler() {
	// TODO Auto-generated destructor stub
}

void Scrambler::Scrambler_TurnOn(const uint8* mapperArrayPtr)
{
	for(int i=0;i<8;i++)
	{
		for(int j=7;j>=0;j--)
		{
			/* Check if the bit in the mapperArray = 1, then I will write it in the
			 * transposed place in the scramblerArray. */
			if(mapperArrayPtr[i] & (1<<j))
			{
				scramblerOutArray[7-j] |= (1<<(7-i));
			}
			else
			{
				/* leave it zero as it is */
			}

		}
	}
}

uint8* Scrambler::Scrambler_GetOutput()
{
	/* returning the address of the of the transposed array "o/p of scrambler" */
	return scramblerOutArray;
}

void Scrambler::Scrambler_PrintOutput()
{
    std::cout << "Scrambler output1: " << std::endl;
    for(int i=0;i<8;i++)
    {
    	for(int j=7;j>=0;j--)
    		std::cout<< ((scramblerOutArray[i] & (1U << j)) >> j);
    	std::cout<<std::endl;
    }
    std::cout << "Scrambler final output: " << std::endl;
    for(int i=0;i<8;i++)
    {
    	for(int j=7;j>=0;j--)
    		std::cout<< ((scramblerOutArray[i] & (1U << j)) >> j);
    }
    std::cout<<std::endl;
    std::cout<<"----------------------------------------"<< std::endl;
}









