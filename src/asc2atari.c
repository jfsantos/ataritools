#include <stdio.h>
#include <ctype.h>
#define PC_NEWLINE 10
#define ATARI_NEWLINE 155

int main(int argc, char **argv) {
    FILE *fi, *fo;
    int c;

    if (argc < 3) {
        fprintf(stderr, "Usage: asc2atari input.bas OUTPUT.LST\n");
        return -1;
    }

    fi = fopen(argv[1], "r");
    fo = fopen(argv[2], "w");

    while ((c = fgetc(fi)) != EOF) {
        if (c == PC_NEWLINE) {
            fputc(ATARI_NEWLINE, fo);
        } else {
            fputc(toupper(c), fo);
        }
    }

    fclose(fi);
    fclose(fo);

    return 0;

}

