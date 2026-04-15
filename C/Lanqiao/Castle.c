#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int a, b, c, d, e, x, sum_1, sum_2;
  for (a = 1;a < 10; a++)
  {
    for (b = 1; b < 10; b++)
    {
      if (b == a)
      {
        continue;
      }
      else
      for (c = 1; c < 10; c++)
      {
        if (c == a || c == b)
        {
          continue;
        }
        else
        {
          for (d = 1; d < 10; d++)
          {
            if (d == a || d == b || d == c)
            {
              continue;
            }
            else
            {
              for (e = 1; e < 10; e++)
              {
                if (e == a || e == b || e == c || e == d)
                {
                  continue;
                }
                else
                {
                  for (x = 2; x < 10; x++)
                  {
                    sum_1 = a * 10000 + b * 1000 + c * 100 + d * 10 + e;
                    sum_2 = e * 10000 + d * 1000 + c * 100 + b * 10 + a;
                    if (sum_1 * x == sum_2)
                    {
                      printf("%d", sum_1);
                      break;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}