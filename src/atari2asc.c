#include <stdio.h>
#define PC_NEWLINE 10
#define ATARI_NEWLINE 155

int main(int argc, char **argv) {
    if (argc < 3) {
        fprintf(stderr, "Usage: atari2asc INPUT.LST output.bas\n");
        return -1;
    }

    FILE *fi, *fo;
    int c;

    fi = fopen("tones.bas", "r");
    fo = fopen("TONES.LST", "w");

    while ((c = fgetc(fi)) != EOF) {
        if (c == PC_NEWLINE) {
            fputc(ATARI_NEWLINE, fo);
        } else {
            fputc(c, fo);
        }
    }

    fclose(fi);
    fclose(fo);

    return 0;

}

