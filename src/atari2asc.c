#include <stdio.h>
#define PC_NEWLINE 10
#define ATARI_NEWLINE 155

int main(int argc, char **argv) {

    FILE *fi, *fo;
    int c;

    if (argc < 3) {
        fprintf(stderr, "Usage: atari2asc INPUT.LST output.bas\n");
        return -1;
    }

    fi = fopen(argv[1], "r");
    fo = fopen(argv[2], "w");

    while ((c = fgetc(fi)) != EOF) {
        if (c == ATARI_NEWLINE) {
            fputc(PC_NEWLINE, fo);
        } else {
            fputc(c, fo);
        }
    }

    fclose(fi);
    fclose(fo);

    return 0;

}

