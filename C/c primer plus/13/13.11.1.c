#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int ch;
    FILE *fp;
    unsigned long count = 0;
    if ((fp = fopen("D:\\code\\c primer plus\\13\\text.txt", "r")) == NULL)
    {
        printf("Usage: %s filename\n","D:\\code\\c primer plus\\13\\text.txt");
        exit(EXIT_FAILURE);
    }
    while ((ch = getc(fp)) != EOF)
    {
        putc(ch,stdout);
        count++;
    }
    fclose(fp);
    printf("\nFile %s has %lu chararters\n", "D:\\code\\c primer plus\\13\\text.txt", count);
}