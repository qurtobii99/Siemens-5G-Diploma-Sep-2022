/*
 * Demodulator.cpp
 *
 *  Created on: Sep 9, 2022
 *      Author: qurtobii99
 */

#include "../headers/Demodulator.h"

Demodulator::Demodulator() {
	// TODO Auto-generated constructor stub

}

Demodulator::~Demodulator() {
	// TODO Auto-generated destructor stub
}

void Demodulator::Demodulator_TurnOn(const complexNumber* ptr2CyclicPrefixOutput)
{
	int bitIndex = 0;



	for(int i=0;i<NUMBER_OF_IQ_SAMPLES;i++)
	{
		/* Reset the bit index when we reach the last 2 bits in the array (bit6 and bit7) */
		if(bitIndex == 8)
		{
			bitIndex = 0;
		}

		if((ptr2CyclicPrefixOutput[i].real > 0) && (ptr2CyclicPrefixOutput[i].imaginary > 0)) //1st quad
		{
			DemodulatorOutput[i/4] |= (0x03<<bitIndex);
		}
		else if((ptr2CyclicPrefixOutput[i].real < 0) && (ptr2CyclicPrefixOutput[i].imaginary > 0)) //2nd quad
		{
			DemodulatorOutput[i/4] |= (0x02<<bitIndex);
		}
		else if((ptr2CyclicPrefixOutput[i].real < 0) && (ptr2CyclicPrefixOutput[i].imaginary < 0)) //3rd quad
		{
			DemodulatorOutput[i/4] |= (0x00<<bitIndex);
		}
		else
		{
			DemodulatorOutput[i/4] |= (0x01<<bitIndex);
		}

		/* Increment the bit index to map the next IQ sample to the next 2 bits */
		bitIndex +=2;
	}
}
const uint8* Demodulator::Demodulator_GetOutput()
{
	return DemodulatorOutput;
}

void Demodulator::Demodulator_PrintOutput()
{
	std::cout << "Demodulator output: "<<std::endl;
    for(int i=0;i<8;i++)
    {
    	for(int j=7;j>=0;j--)
    		std::cout<< ((DemodulatorOutput[i] & (1U << j)) >> j);
    }
    std::cout<<std::endl;
    std::cout<<"----------------------------------------"<< std::endl;
}
