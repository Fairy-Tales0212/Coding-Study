#include <stdio.h>

int guess = 50;
int awe; 
int n;
int lat = 0;
char check_1;

char check_2;
int min = 1;
int max = 100;   

char det (void);
void cal (int x);
void text (void);
void guess_pro (void);
void worry (void);


int main(void)
{
    text();
    guess_pro();
    printf("I know I could do it!\n");
    return 0;
}

void text (void)
{
    printf("Pick an integer from 1 to 100. I will try to guess ");
    printf("it.\nRespond with a y if my guess is right and with");
    printf("\nan n if it is wrong.\n");
    printf("Uh...is your number %d?\n",guess);
}

void guess_pro (void)
{
    while (1)
    {
        check_1 = det();
        if (check_1 == 'y')
        {
            break;
        }
        else if (check_1 == 'n')
        {
            printf("So is this number larger than the guessed value?");
            printf("\nRespond with a y if my guess is right and with");
            printf("\nan n if it is wrong.\n");
            check_2 = det();
            cal(check_2);
        }
        else if (check_1 == 'k')
        {
            worry();
        }
    }
}

char det(void)
{
   lat = 0;
   char ch;
   int i = 0;
    while ((awe = getchar())!= EOF)
    {
        if (awe == ' '|| awe == '\n')
        {
            continue;
        }
        else if (awe == 'y')
        {
            lat++;
            i++;
            if (getchar() == '\n')
            {
                break;
            }
            else 
            {
                lat++;
                break;
            }
        }
        else if (awe == 'n')
        {
            lat++;
            i--;
            if (getchar() == '\n')
            {
                break;
            }
            else 
            {
                lat++;
                break;
            }
        }
    }
    if (i == 1 && lat == 1)
    {
        return 'y';
    }
    else if (i == -1 && lat == 1)
    {
        return 'n';
    }
    else 
    {
        return 'k';
    }

}

void cal (int x)
{
    if (x == 'y')
    {
        min = guess;
        if (((min+max)%2) == 1)
        {
            guess = (1 + min + max)/2;
        }
        else 
        {
            guess = (min + max)/2;
        }
        printf("Uh...is your number %d?\n",guess);
    }
    else if (x == 'n')
    {
        max = guess;
        if (((min+max)%2) == 1)
        {
            guess = (1 + min + max)/2;
        }
        else 
        {
            guess = (min + max)/2;
        }
        printf("Uh...is your number %d?\n",guess);
    }
    else 
    {
        worry();
    }
}

void worry (void)
{
    printf("Sorry I understand only y or n.\n");
    printf("Respond with a y if my guess is right and with");
    printf("\nan n if it is wrong.\n");
}