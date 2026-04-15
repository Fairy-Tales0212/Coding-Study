#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM 1000

int arr[NUM];
int n1 = 0;
int n2 = 0;
int n3 = 0;
int n4 = 0;
int n5 = 0;
int n6 = 0;
int n7 = 0;
int n8 = 0;
int n9 = 0;
int n10 = 0;

void random(int*arr);
void sum(int*arr);
void show(int*arr);

int main(void)
{
    random(arr);

    sum(arr);

    show(arr);

    return 0;
}

void random(int*arr)
{
    srand((unsigned int) time (NULL));

    for (int i = 0; i < NUM; i++)
    {
        arr[i] = rand() % 10 + 1;
    }
}

void sum(int*arr)
{
    for (int i = 0; i < NUM; i++)
    {
        switch (arr[i])
        {
        case 1:
        {
            n1++;
            break;
        }
        case 2:
        {
            n2++;
            break;
        }
        case 3:
        {
            n3++;
            break;
        }
        case 4:
        {
            n4++;
            break;
        }
        case 5:
        {
            n5++;
            break;
        }
        case 6:
        {
            n6++;
            break;
        }
        case 7:
        {
            n7++;
            break;
        }
        case 8:
        {
            n8++;
            break;
        }
        case 9:
        {
            n9++;
            break;
        }
        case 10:
        {
            n10++;
            break;
        }
        }
    }
}

void show(int*arr)
{
    printf("1 : %d\n",n1);
    printf("2 : %d\n",n2);
    printf("3 : %d\n",n3);
    printf("4 : %d\n",n4);
    printf("5 : %d\n",n5);
    printf("6 : %d\n",n6);
    printf("7 : %d\n",n7);
    printf("8 : %d\n",n8);
    printf("9 : %d\n",n9);
    printf("10 : %d\n",n10);
}