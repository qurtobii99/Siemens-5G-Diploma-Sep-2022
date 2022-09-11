/*
 * constants.h
 *
 *  Created on: Sep 8, 2022
 *      Author: qurtobii99
 */

#ifndef CONSTANTS_H_
#define CONSTANTS_H_

#define IS_BIT_SET(variable,bitNumber) (variable & (1<<bitNumber))
#define READ_BIT(variable,bitNumber) (variable & (1<<bitNumber)) >> bitNumber)

#define ENCODER_IN_BITS 21
#define ENCODER_OUT_BITS 64

#define DECODER_IN_BITS 64
#define DECODER_OUT_BITS 21

#define MAPPER_IN_BITS 64
#define MAPPER_OUT_BITS 21

#define DEMAPPER_OUT_BITS 64

#define SCRAMPER_ARRAY_SIZE 8
#define DESCRAMPER_ARRAY_SIZE 8

#define FIRST_QUAD  0x03 /* For the bit combination 11 */
#define SECOND_QUAD 0x02 /* For the bit combination 10 */
#define THIRD_QUAD  0x00 /* For the bit combination 00 */
#define FOUTH_QUAD  0x01 /* For the bit combination 01 */

#define NUMBER_OF_IQ_SAMPLES 32

#define DEMODULATOR_ARRAY_SIZE 8

#define RANDOM_NUMBER 122856

#define NUMBER_OF_IQ_SAMPLES_AFTER_CP_ADDER 40
#define NUMBER_OF_IQ_SAMPLES_AFTER_CP_REMOVER 32

#define AWGN_CHANNEL_OUTPUT 40

#endif /* CONSTANTS_H_ */
