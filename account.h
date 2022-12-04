
#pragma once
#include "common.h"


EVP_PKEY* account_keys_create(void);
int account_keys_write_PEM_file(EVP_PKEY* const key, uint8_t* const path);