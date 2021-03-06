/**
 * \file sm4.h
 */
#ifndef _SM4_H
#define _SM4_H

#define SM4_ENCRYPT     1
#define SM4_DECRYPT     0

#ifdef __cplusplus
extern "C" {
#endif

/**
 * \brief          SM4-ECB  encryption/decryption
 * \param input    buffer holding the input data
 * \param length   length of the input data
 * \param output   buffer holding the output data
 * \param key      16-byte secret key
 * \param mode     SM4_ENCRYPT or SM4_DECRYPT
**/

void sm4_ecb(unsigned char *input,int length,unsigned char *output,unsigned char key[16],int mode);

/**
 * \brief          SM4-CBC encryption/decryption
 * \param input    buffer holding the input data
 * \param length   length of the input data
 * \param iv       initialization vector (updated after use)
 * \param output   buffer holding the output data
 * \param key      16-byte secret key
 * \param mode     SM4_ENCRYPT or SM4_DECRYPT
 */

void sm4_cbc(unsigned char *input,int length,unsigned char iv[16],unsigned char *output,unsigned char key[16],int mode);

#ifdef __cplusplus
}
#endif

#endif /* sm4.h */
