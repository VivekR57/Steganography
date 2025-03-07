#ifndef DECODE_H
#define DECODE_H

#include <stdio.h>
#include <string.h>
#include "types.h"

/* Structure to store decoding information */
typedef struct _DecodeInfo
{
    FILE *fptr_stego_image;   // File pointer to stego BMP image
    char *stego_image_fname;  // Stego BMP image file name
    int file_size;            // Size of the hidden file

    char extension[5];        // Extracted file extension
    int length;               // Length of the extracted extension

    char output_fname[20];    // Output file name for extracted data
    FILE *fptr_output_file;   // File pointer for output file
} DecodeInfo;

Status read_and_validate_decode_args(int argc, char *argv[], DecodeInfo *decInfo);

/* Perform decoding */
Status do_decoding(DecodeInfo *decInfo);

/* Open files for decoding */
Status open_files_for_decode(DecodeInfo *decInfo);

/* Decode magic string to confirm stego file */
Status decode_magic_string(DecodeInfo *decInfo);

/* Decode  file extension Size */
Status decode_file_extn_size(DecodeInfo *decInfo);

/* Decode secret file extension */
Status decode_secret_file_extn(DecodeInfo *decInfo);

/* Decode secret file size */
Status decode_secret_file_size(DecodeInfo *decInfo);

/* Decode secret file data */
Status decode_secret_file_data(DecodeInfo *decInfo);

/* Decode LSB to Byte */
Status decode_lsb_to_byte(char *data, char *image_buffer);

/* Decode LSB to Int */
Status decode_lsb_to_int(int *data, char *image_buffer);

#endif