/*
 * sinewave_table.h
 *
 *  Created on: 14 juil. 2021
 *      Author: Laurent
 */

#ifndef INC_SINEWAVE_TABLE_H_
#define INC_SINEWAVE_TABLE_H_

/*
 * sinewave.h
 *
 * 60 samples Sine function wavetable
 * - 1 sample every 6°
 * - 12-bit unsigned scale
 */

const uint16_t sinewave[60] =
{
		0x0800, 0x08d5, 0x09a8, 0x0a76,
		0x0b3e, 0x0bfc, 0x0caf, 0x0d55,
		0x0dec, 0x0e72, 0x0ee7, 0x0f48,
		0x0f94, 0x0fcb, 0x0fed, 0x0ff8,
		0x0fed, 0x0fcb, 0x0f94, 0x0f48,
		0x0ee7, 0x0e72, 0x0dec, 0x0d55,
		0x0caf, 0x0bfc, 0x0b3e, 0x0a76,
		0x09a8, 0x08d5, 0x0800, 0x072b,
		0x0658, 0x058a, 0x04c2, 0x0404,
		0x0351, 0x02ab, 0x0214, 0x018e,
		0x0119, 0x00b8, 0x006c, 0x0035,
		0x0013, 0x0008, 0x0013, 0x0035,
		0x006c, 0x00b8, 0x0119, 0x018e,
		0x0214, 0x02ab, 0x0351, 0x0404,
		0x04c2, 0x058a, 0x0658, 0x072b
};

#endif /* INC_SINEWAVE_TABLE_H_ */
