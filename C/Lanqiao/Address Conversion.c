#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int row, col, num, numCol;
  char str[99];
  scanf("%s", &str);
  scanf("%d", &num);
  getchar();
  for (int i = 0; i < num; i++)
  {
    row = col = 0;
    scanf("R%dC%d", &row, &col);
    getchar();

    if (col <= 26)
    {
      printf("%c", 'A' + col - 1);
    }
    else 
    {
      int arr[99] = {0};
      numCol = 0;
      arr[numCol] = col % 26;
      col -= arr[numCol];
      while (col >= 26)
      {
        numCol++;
        arr[numCol] = col / 26; 
        col /= 26;
      }
      for (int j = numCol; j >= 0; j--)
      {
        printf("%c", 'A' + arr[j] - 1);
      }
    }
    printf("%d\n", row);
  }

  return 0;
}