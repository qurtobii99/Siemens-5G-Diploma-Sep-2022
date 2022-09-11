/*
 * CyclicPrefixRemover.h
 *
 *  Created on: Sep 10, 2022
 *      Author: qurtobii99
 */

#ifndef CYCLICPREFIXREMOVER_H_
#define CYCLICPREFIXREMOVER_H_

#include "preprocessors.h"
#include <iostream>
#include "definedTypes.h"

class CyclicPrefixRemover {
private:
	complexNumber cyclicPrefixRemoverOutput[NUMBER_OF_IQ_SAMPLES_AFTER_CP_REMOVER];
public:
	CyclicPrefixRemover();
	~CyclicPrefixRemover();
	void CyclicPrefixRemover_TurnOn(const complexNumber* ptr2AWGNChannelOutput);

	/* This function return pointer to the array of structure, contains the mapping of each 2 bits,
		to the corresponding IQ samples after removing the 8 added sampels by the CP adder*/
	const complexNumber* CyclicPrefixRemover_GetOutput();

	void CyclicPrefixRemover_PrintOutput();
};

#endif /* CYCLICPREFIXREMOVER_H_ */
