/*
 * Scrambler.h
 *
 *  Created on: Sep 8, 2022
 *      Author: qurtobii99
 */

#ifndef SCRAMBLER_H_
#define SCRAMBLER_H_

#include <bits/stdc++.h>
#include "../headers/preprocessors.h"
#include <iostream>
#include "definedTypes.h"

class Scrambler {
private:
	uint8 scramblerOutArray[SCRAMPER_ARRAY_SIZE] = {0};
public:
	Scrambler();
	~Scrambler();
	void Scrambler_TurnOn(const uint8* mapperArrayPtr);
	uint8* Scrambler_GetOutput();
	void Scrambler_PrintOutput();

};

#endif /* SCRAMBLER_H_ */
