#include <stdio.h>
#include <stdlib.h>

int check(char **str, int i, int j, int rows, int cols);

int main(int argc, char *argv[])
{
  int rows, cols;
  int numX = 0;
  scanf("%d %d", &rows, &cols);
  char **str = (char **)malloc(rows * sizeof(char *));
  if (str == NULL)
  {
    printf("行指针分配失败\n");
    return 1;
  }

  for (int i = 0; i < rows; i++)
  {
    str[i] = (char *)malloc(cols * sizeof (char));
    if (str[i] == NULL)
    {
      printf("第%d行元素分配失败\n", i);
      for (int j = 0; j < i; j++)
      {
        free(str[j]);
      }
      free(str);
      return 1;
    }
  }

  scanf("%s", str[0]);
  scanf("%s", str[1]);
  scanf("%s", str[2]);
  scanf("%s", str[3]);
  scanf("%s", str[4]);

  for (int i = 1; i < rows - 1; i++)
  {
    for (int j = 1; j < cols - 1; j++)
    {
      numX += check(str, i, j, rows, cols);
    }
  }

  printf("%d", numX);

  for (int j = 0; j < rows; j++)
  {
    free(str[j]);
  }
  free(str);
  return 0;
}

int check(char **str, int i, int j, int rows, int cols)
{
  int num = 0;
  for (int k = 1;i + k < rows && i - k >= 0 && j + k < cols && j - k >= 0; k++)
  {
    if (str[i - k][j - k] == str[i][j] && str[i - k][j + k] == str[i][j] && str[i + k][j - k] == str[i][j] && str[i + k][j + k] == str[i][j])
    {
      num++;
    }
    else
    {
      break;
    }
  }
  return num;
}