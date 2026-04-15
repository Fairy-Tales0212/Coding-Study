#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int roll_count;
int dice, roll;
int sides;

static int rollem(int sides);
int roll_n_dice(int dice, int sidesS);

int main(void)
{
    int status;
    int num;


    srand((unsigned int) time(0));

    printf("Enter the number of sets; enter q to stop :");

    while (scanf("%d", &num) == 1 && num > 0)
    {
        printf("How many sides and how many dice?\n");
        status = scanf("%d %d", &sides, &dice);
        if (status != 2)
        {
            printf("You should have entered an integer.");
            printf(" Let's begin again.\n");
            printf("How many sets? Enter q to stop :\n");
            while (getchar() != '\n');
            {
                continue;
            }
            continue;
        }
        printf("Here are %d sets of %d %d-sided throws.\n", num, sides, dice);
        for (int i = 0; i < num; i++)
        {
            roll = roll_n_dice(dice,sides);
            printf("%d  ",roll);
        }
        printf("\nHow many sets? Enter q to stop :\n");
    }
    printf("GOOD FORTUNE TO YOU!\n");

    return 0;
}

static int rollem(int sides)
{
    int roll;

    roll = rand() % sides + 1;
    ++roll_count;

    return roll;
}

int roll_n_dice(int dice, int sides)
{
    int d;
    int total = 0;
    if (sides < 2)
    {
        printf("Need at least 2 sides.\n");
        return -2;
    }
    if (dice < 1)
    {
        printf("Need ar least 1 die.\n");
        return -1;
    }

    for (d = 0; d < dice; d++)
    {
        total += rollem(sides);
    }

    return total;
}
