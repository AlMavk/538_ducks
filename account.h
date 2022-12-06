
#pragma once
#include "common.h"


EVP_PKEY* account_keys_create(void);
int account_keys_write_PEM_file(EVP_PKEY* const key, uint8_t* const path);
int account_keys_load_PEM_file(EVP_PKEY** const key, uint8_t* const filePath);
void account_keys_print_one_PEM(EVP_PKEY* const key, KEY_TYPE KT);
void account_keys_print_pair_PEM(EVP_PKEY* const key);