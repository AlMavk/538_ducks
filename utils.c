
#include "utils.h"

uint8_t* concat(uint8_t* const strA, uint8_t* const strB)
{
	uint8_t* result;

	if (!strA || !strB)
		return NULL;