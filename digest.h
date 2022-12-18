
#pragma once
#include "common.h"

int digest_hash_file(uint8_t hashBinResult[SHA256_DIGEST_LENGTH], uint8_t* const filePath);
int digest_hash_str(uint8_t binmd[SHA256_DIGEST_LENGTH], uint8_t* const str);                                                            // 256 bits, 32 bytes
int digest_hash_bin(uint8_t ouput_bin_buffer[SHA256_DIGEST_LENGTH], uint8_t const input_bin_buf[SHA256_DIGEST_LENGTH]);                  // 256 bits, 32 bytes
int digest_bin_2_hex(uint8_t hexmd[HEX_HASH_NT_SZ], IO_BUFFER_SZ OUT_SZ, uint8_t const binmd[SHA256_DIGEST_LENGTH], IO_BUFFER_SZ IN_SZ); // TODO : simplifier : lock buffer size, suppress arg 2 & 4
uint8_t* digest_hex_2_bin_bulk(uint8_t* bin_array, uint8_t* const const hexmd[HEX_HASH_NT_SZ], size_t count);
uint8_t* digest_hex_2_bin_bulk_to_lendian(uint8_t* const hexmd[], size_t count);
// int digest_hex_2_bin(uint8_t binmd[SHA256_DIGEST_LENGTH], uint8_t const hexmd[HEX_HASH_NT_SZ], size_t count);		// a refaire pour un seul md
void digest_hex_pretty_print(uint8_t const hexsig[]);

// merkle tree functions