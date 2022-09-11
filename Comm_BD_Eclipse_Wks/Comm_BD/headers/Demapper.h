/*
 * Demapper.h
 *
 *  Created on: Sep 8, 2022
 *      Author: qurtobii99
 */

#ifndef DEMAPPER_H_
#define DEMAPPER_H_

#include <bits/stdc++.h>
#include "../headers/preprocessors.h"
#include <iostream>
#include "definedTypes.h"

class Demapper {
private:
	std::bitset<DEMAPPER_OUT_BITS> demapperOut;
public:
	Demapper();
	~Demapper();
	void Demapper_TurnOn(const uint8* descramblerOutPtr2Char);
	std::bitset<DEMAPPER_OUT_BITS> Demapper_GetOut();
	void Demapper_PrintOutput();

};

#endif /* DEMAPPER_H_ */
