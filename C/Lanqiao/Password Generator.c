#include <stdio.h>
#include <stdlib.h>

#define CODE 6

void Info(int *arr, int i);

int main(int argc, char *argv[])
{
  int str_num;
  int arr[CODE] = {0};
  char str[99] = {'0'};
  scanf("%d", &str_num);
  getchar();
  while (str_num--)
  {
    for (int i = 0; i < 99; i++)
    {
        char c = getchar();
        if (c == '\n')
        {
            str[i] = c;
            break;
        }
        else
        {
            str[i] = c;
        }
    }
    for (int i = 0; i < 99; i++)
    {
        if (str[i] == '\n')
        {
          break;
        }
        arr[i % 6] += (int)(str[i]);
        Info(arr, i % 6);
    }
    for (int i = 0; i < 6; i++)
    {
        printf("%d", arr[i]);
        arr[i] = 0;
    }
    printf("\n");
  }
  return 0;
}

void Info(int *arr, int i)
{
  int num = arr[i];
  int sum = 0;
  while (num > 0)
  {
    sum += num % 10;
    num /= 10;
  }
  arr[i] = sum;
  while (arr[i] > 9)
  {
    Info(arr, i);
  }
}