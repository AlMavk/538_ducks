
#pragma once

#include "common.h"

int sign_msg(uint8_t signBin[SIG_BIN_SZ], EVP_PKEY* const skey, uint8_t* const msg);
int sign_file(uint8_t signBin[SIG_BIN_SZ], EVP_PKEY* const skey, uint8_t* const filePath);
bool sign_verify_str_msg(EVP_PKEY* const pubkey, uint8_t* const signature, uint8_t* const msg);