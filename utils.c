
#include "utils.h"

uint8_t* concat(uint8_t* const strA, uint8_t* const strB)
{
	uint8_t* result;

	if (!strA || !strB)
		return NULL;

	result = malloc(strlen(strA) + strlen(strB) + 1);	// +1 for the null terminator;
	if (result == NULL) exit(-1);
