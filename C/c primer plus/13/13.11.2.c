#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LEN 40

int main(int argc, char *argv [])
{
    FILE *in, *out;
    int ch;
    char name[LEN];
    int count = 0;

    if (argc < 2)
    {
        fprintf(stderr, "Usage: %s filename\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    if ((in = fopen(argv[1], "r")) == NULL)
    {
        fprintf(stderr, "I couldn't open the file \"%s\"\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    strncpy(name, argv[2], LEN - 5);
    name[LEN - 5] = '\0';

    if ((out = fopen(argv[2], "w")) == NULL)
    {
        fprintf(stderr, "I couldn't open the file \"%s\"\n", argv[2]);
        exit(EXIT_FAILURE);
    }

    while ((ch = getc(in)) != EOF)
    {
        putc(ch, out);
    }

    if (fclose(in) != 0 || fclose(out) != 0)
    {
        fprintf(stderr, "Error in closing1 files \n");
    }

    return 0;
}