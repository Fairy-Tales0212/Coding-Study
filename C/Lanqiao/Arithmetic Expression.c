#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int a, b, c, d, e, f, g, h, i;
  int sum = 0;
  for (a = 1; a < 10; a++)
  {
    for (b = 1; b < 10; b++)
    {
      if (a == b)
      {
        continue;
      }
      for (c = 1; c < 10; c++)
      {
        if (c == b || c == a)
        {
          continue;
        }
        for (d = 1; d < 10; d++)
        {
          if (d == c || d == b || d == a)
          {
            continue;
          }
          for (e = 1; e < 10; e++)
          {
            if (e == d || e == d || e == c || e == b || e == a)
            {
              continue;
            }
            for (f = 1; f < 10; f++)
            {
              if (f == d || f == d || f == c || f == b || f == a || f == e)
              {
                continue;
              }
              for (g = 1; g < 10; g++)
              {
                if (g == d || g == c || g == b || g == a || g == e || g == f)
                {
                  continue;
                }
                for (h = 1; h < 10; h++)
                {
                  if (h == d || h == c || h == b || h == a || h == e || h == f || h == g)
                  {
                    continue;
                  }
                  for (i = 1; i < 10; i++)
                  {
                    if (i == d || i == c || i == b || i == a || i == e || i == f || i == g || i == h)
                    {
                      continue;
                    }
                    int num_1 = a * 100 + b * 10 + c;
                    int num_2 = d * 100 + e * 10 + f;
                    int num_3 = g * 100 + h * 10 + i;
                    if (num_1 + num_2 == num_3)
                    {
                        sum++;
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
  printf("%d", sum);
  return 0;
}