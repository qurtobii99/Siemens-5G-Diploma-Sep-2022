/*
 * Demodulator.h
 *
 *  Created on: Sep 9, 2022
 *      Author: qurtobii99
 */

#ifndef DEMODULATOR_H_
#define DEMODULATOR_H_

#include "preprocessors.h"
#include <iostream>
#include "definedTypes.h"

class Demodulator {
private:
	uint8 DemodulatorOutput[DEMODULATOR_ARRAY_SIZE] = {0};
public:
	Demodulator();
	~Demodulator();

	void Demodulator_TurnOn(const complexNumber* ptr2CyclicPrefixOutput);
	const uint8* Demodulator_GetOutput();
	void Demodulator_PrintOutput();
};

#endif /* DEMODULATOR_H_ */
