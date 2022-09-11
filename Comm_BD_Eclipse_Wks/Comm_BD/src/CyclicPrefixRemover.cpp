/*
 * CyclicPrefixRemover.cpp
 *
 *  Created on: Sep 10, 2022
 *      Author: qurtobii99
 */

#include "../headers/CyclicPrefixRemover.h"

CyclicPrefixRemover::CyclicPrefixRemover() {
	// TODO Auto-generated constructor stub

}

CyclicPrefixRemover::~CyclicPrefixRemover() {
	// TODO Auto-generated destructor stub
}

void CyclicPrefixRemover::CyclicPrefixRemover_TurnOn(const complexNumber* ptr2AWGNChannelOutput)
{
	for(int i=0;i<NUMBER_OF_IQ_SAMPLES_AFTER_CP_REMOVER;i++)
	{
			cyclicPrefixRemoverOutput[i] = ptr2AWGNChannelOutput[i];
	}
}

/* This function return pointer to the array of structure, contains the mapping of each 2 bits,
	to the corresponding IQ samples after removing the 8 added sampels by the CP adder*/
const complexNumber* CyclicPrefixRemover::CyclicPrefixRemover_GetOutput()
{
	return cyclicPrefixRemoverOutput;
}

void CyclicPrefixRemover::CyclicPrefixRemover_PrintOutput()
{
    std::cout << "Cyclic Prefix Remover output: " << std::endl;
    for(int i=0;i<NUMBER_OF_IQ_SAMPLES_AFTER_CP_REMOVER;i++)
    {
    	std::cout<< "(" << cyclicPrefixRemoverOutput[i].real << ","<<\
    			cyclicPrefixRemoverOutput[i].imaginary <<")" << std::endl;
    }
    std::cout<<"----------------------------------------"<< std::endl;
}













