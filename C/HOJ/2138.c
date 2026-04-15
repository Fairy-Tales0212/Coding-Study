#include <stdio.h>
#include <string.h>

int get_min(int x); 
int get_max(int x);

int main(void)
{
    int n;
    while (scanf("%d", &n) == 1)
    {
        int x = n, i = 1;
        while (x != 6174 && x != 0)
        {
            int min = get_min(x);
            int max = get_max(x);
            x = max - min;
            printf("%d: %d - %d = %d\n", i, max, min, x);
            i++;
        }
        printf("\n");
    }
    return 0;
}

void sort_digits(int digits[], int n, int ascending)
{
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if ((ascending && digits[j] > digits[j+1]) || 
                (!ascending && digits[j] < digits[j+1])) {
                int temp = digits[j];
                digits[j] = digits[j+1];
                digits[j+1] = temp;
            }
        }
    }
}

int get_min(int x)
{
    char str[5];
    sprintf(str, "%04d", x); 
    int digits[4];
    for (int i = 0; i < 4; i++) {
        digits[i] = str[i] - '0';
    }
    
    sort_digits(digits, 4, 1); 
    
    return digits[0]*1000 + digits[1]*100 + digits[2]*10 + digits[3];
}

int get_max(int x)
{
    char str[5];
    sprintf(str, "%04d", x);  
    
    int digits[4];
    for (int i = 0; i < 4; i++) {
        digits[i] = str[i] - '0';
    }
    
    sort_digits(digits, 4, 0); 
    
    return digits[0]*1000 + digits[1]*100 + digits[2]*10 + digits[3];
}