#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int row, col, num;
  scanf("%d %d", &row, &col);

  /*分配动态数据内存*/

  int **arr = (int **)malloc(row * sizeof(int *));
  for (int i = 0; i < row; i++)
  {
    arr[i] = (int *)malloc(col * sizeof(int));
  }
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      scanf("%d", &num);
      arr[i][j] = num;
    }
  }

  /*检测地雷*/
  int landmine_num;
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      if (arr[i][j] == 1)
      {
        printf("9");
      }
      else
      {
        landmine_num = 0;
        for (int x = i-1; x <= i+1; x++)
        {
          if (x < 0)
          {
            continue;
          }
          else if (x > row-1)
          {
            break;
          }
          for (int y = j-1; y <= j+1; y++)
          {
            if (y < 0 || y > col-1)
            {
              continue;
            }
            if (arr[x][y] == 1)
            {
              landmine_num++;
            }
          }
        }
        printf("%d", landmine_num);
      }
      if (j != col - 1)
      {
        printf(" ");
      }
      else
      {
        printf("\n");
      }
    }
  }
  return 0;
}