#include <stdio.h>
#include <string.h>

char word[20];
int str;

int main (void)
{
    printf("Enter a word:");
    scanf("%s",&word);
    str = strlen(word) -1;
    for (;str >= 0;str--)
    {
        printf("%c",word[str]);
    }
    return 0;
}