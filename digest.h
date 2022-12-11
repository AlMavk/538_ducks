
#pragma once
#include "common.h"

int digest_hash_file(uint8_t hashBinResult[SHA256_DIGEST_LENGTH], uint8_t* const filePath);
int digest_hash_str(uint8_t binmd[SHA256_DIGEST_LENGTH], uint8_t* const str);                                                            // 256 bits, 32 bytes