/*
 * CyclicPrefixAdder.cpp
 *
 *  Created on: Sep 10, 2022
 *      Author: qurtobii99
 */

#include "../headers/CyclicPrefixAdder.h"

CyclicPrefixAdder::CyclicPrefixAdder() {
	// TODO Auto-generated constructor stub

}

CyclicPrefixAdder::~CyclicPrefixAdder() {
	// TODO Auto-generated destructor stub
}

void CyclicPrefixAdder::CyclicPrefixAdder_TurnOn(const complexNumber* ptr2MoudlatorOutput)
{
	for(int i=0;i<NUMBER_OF_IQ_SAMPLES_AFTER_CP_ADDER;i++)
	{
		if(i<NUMBER_OF_IQ_SAMPLES)
		{
			cyclicPrefixAdderOutput[i] = ptr2MoudlatorOutput[i];
		}
		else //number of samples >= 32, copy the 1st 8 samples
		{
			cyclicPrefixAdderOutput[i] = ptr2MoudlatorOutput[i-32];
		}

	}
}

const complexNumber* CyclicPrefixAdder::CyclicPrefixAdder_GetOutput()
{
	return cyclicPrefixAdderOutput;
}

void CyclicPrefixAdder::CyclicPrefixAdder_PrintOutput()
{
    std::cout << "Cyclic Prefix Adder output: " << std::endl;
    for(int i=0;i<NUMBER_OF_IQ_SAMPLES_AFTER_CP_ADDER;i++)
    {
    	std::cout<< "(" << cyclicPrefixAdderOutput[i].real << ","<<\
    			cyclicPrefixAdderOutput[i].imaginary <<")" << std::endl;
    }
    std::cout<<"----------------------------------------"<< std::endl;
}












