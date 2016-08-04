/******************************************************************************
 *
 *
 *
 *
 *
 *****************************************************************************/

#ifndef __TYPES_H
#define __TYPES_H

#include <stdint.h>

typedef enum {
	BIT_SIZE_8,
	BIT_SIZE_16,
	BIT_SIZE_32,
	BIT_SIZE_64
} beef_word_size;

typedef struct {
	char instLabel;
	int64_t dataValue;
} beef_instructions;

#endif // __TYPES_H