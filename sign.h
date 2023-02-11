
#pragma once

#include "common.h"

int sign_msg(uint8_t signBin[SIG_BIN_SZ], EVP_PKEY* const skey, uint8_t* const msg);
int sign_file(uint8_t signBin[SIG_BIN_SZ], EVP_PKEY* const skey, uint8_t* const filePath);