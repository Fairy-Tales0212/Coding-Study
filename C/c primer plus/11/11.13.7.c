#include <stdio.h>

#define NUM 20

char ar1[NUM] = "hello";
char ar2[NUM];
int n = 5;

void mystrncpy(char*ar1, char*ar2, int n);

int main(void)
{
    while (fgets(ar2,NUM + 1,stdin))
    {
        mystrncpy(ar1, ar2, n);
        printf("%s\n",ar1);
        char ar1[NUM] = "hello";
        
    }
    return 0;
}

void mystrncpy(char*ar1, char*ar2, int n)
{
    int i1,i2;
    int k;
    
    for (int i = 0; i < NUM; i++)
    {
        if (ar1[i] == '\0')
        {
            i1 = i;
            break;
        }
    }

    for (int i = 0; i < NUM; i++)
    {
        if (ar2[i] == '\0')
        {
            i2 = i;
            break;
        }
    }

    (NUM - i1) < n ? (k = NUM - i1):(k = n);

    for (int i = 0; i < k; i++)
    {
        ar1[i1 + i] = ar2[i];
    }
    ar1[i1 + k] = '\0';
}