#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

    FILE *in1, *in2;
    if (argc < 3)
    {
        fprintf(stderr, "Usage: %s filename\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    if ((in1 = fopen(argv[1], "r")) == NULL || (in2 = fopen(argv[2], "r")) == NULL)
    {
        fprintf(stderr,"I couldn't open the file\n");
        exit(EXIT_FAILURE);
    }

    if (fclose(in1) != 0 || fclose(in2) != 0)
    {
        fprintf(stderr, "Error in closing files \n");
    }

    for (int i = 1; i < argc; i++)
    {
        printf("%s\n",argv[i]);
    }

    return 0;
}