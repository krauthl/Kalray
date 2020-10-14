#ifndef KALRAY_PNG_UTILS_H
#define KALRAY_PNG_UTILS_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <png.h>

struct decoded_image {
    int         w, h;
    png_byte    color_type;
    png_byte    bit_depth;
    png_structp png_ptr;
    png_infop   info_ptr;
    png_infop   end_info;
    int         number_of_passes;
    png_bytep   *row_pointers;
};

struct png_transformation {
    double red;
    double green;
    double blue;
};

void read_png_file(char *file_name, struct decoded_image *img);

void write_png_file(char *file_name, struct decoded_image *img);

int process_file(struct decoded_image *img, struct png_transformation *transformation);

void abort_(const char *s, ...);

#endif //KALRAY_PNG_UTILS_H
