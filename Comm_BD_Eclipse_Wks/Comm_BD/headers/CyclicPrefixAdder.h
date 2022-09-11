/*
 * CyclicPrefixAdder.h
 *
 *  Created on: Sep 10, 2022
 *      Author: qurtobii99
 */

#ifndef CYCLICPREFIXADDER_H_
#define CYCLICPREFIXADDER_H_

#include "preprocessors.h"
#include <iostream>
#include "definedTypes.h"

class CyclicPrefixAdder {
private:
	complexNumber cyclicPrefixAdderOutput[NUMBER_OF_IQ_SAMPLES_AFTER_CP_ADDER];
public:
	CyclicPrefixAdder();
	virtual ~CyclicPrefixAdder();

	void CyclicPrefixAdder_TurnOn(const complexNumber* ptr2MoudlatorOutput);

	/* This function return pointer to the array of structure, contains the mapping of each 2 bits,
		to the corressponding IQ samples inaddition to copying the initial information (8 samples)
		to the end of each frame*/
	const complexNumber* CyclicPrefixAdder_GetOutput();

	void CyclicPrefixAdder_PrintOutput();
};

#endif /* CYCLICPREFIXADDER_H_ */



