#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  long age, age_pow3, age_pow4;
  int num, state;
  int arr[10];
  for (age = 10; age < 100; age++)
  {
    state = 0;
    age_pow3 = age * age * age;
    age_pow4 = age * age * age * age;
    if (age_pow3 < 1000 || age_pow4 < 100000)
    {
        continue;
    }
    if (age_pow3 > 9999 || age_pow4 > 999999)
    {
        break;
    }
    for (num = 0; num < 4; num++)
    {
      arr[num] = age_pow3 % 10;
      age_pow3 /= 10;
    }
    for (num = 4; num < 10; num++)
    {
      arr[num] = age_pow4 % 10;
      age_pow4 /= 10;
    }
    for (int i = 0; i < 10; i++)
    {
      for (int j = i + 1; j < 10; j++)
      {
        if (arr[i] == arr[j])
        {
          state = 1;
        }
      }
    }
    if (state == 0)
    {
      printf("%ld", age);
      break;
    }
  }
  return 0;
}