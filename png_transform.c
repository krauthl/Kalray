/*
 * Copyright 2002-2010 Guillaume Cottenceau.
 *
 * This software may be freely redistributed under the terms
 * of the X11 license.
 *
 */

#include <stdlib.h>
#include <stdio.h>
#include "png_utils.h"


int main(int argc, char **argv){

	if (argc == 3 || argc == 6){
        struct decoded_image *img = malloc(sizeof(struct decoded_image));
        struct png_transformation *transformation = malloc(sizeof(struct png_transformation));

        printf("Reading input PNG\n");
        read_png_file(argv[1], img);

        if (argc > 3){
            transformation->red = atof(argv[3]);
            transformation->green = atof(argv[4]);
            transformation->blue = atof(argv[5]);
        }

        process_file(img, transformation);

        printf("Writing output PNG\n");
        write_png_file(argv[2], img);

        return 0;
	} else {
        abort_("Usage: program_name <file_in> <file_out>\nOR program-name <file_in> <file_out> <red> <green> <blue>");
	}
}
