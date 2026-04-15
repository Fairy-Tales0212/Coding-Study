#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#define INF INT_MAX/2

int main(int argc, char *argv[])
{
  int N, M;
  int timeMin;
  scanf("%d %d", &N, &M);

  int *timeCity = (int *)malloc(N * sizeof(int));
  if (timeCity == NULL)
  {
    printf("城市停留时间分配失败");
    return 1;
  }

  for (int i = 0; i < N; i++)
  {
    scanf("%d", &timeCity[i]);
  }

  int **time = (int **)malloc(N * sizeof(int *));
  if (time == NULL)
  {
    printf("时间分配失败");
    return 1;
  }

  for (int i = 0; i < N; i++)
  {
    time[i] = (int *)malloc(N * sizeof(int));
    if (time[i] == NULL)
    {
      printf("城市具体时间分配失败");
      for (int j = 0; j < i; j++)
      {
        free(time[j]);
      }
      free(time);
      return 1;
    }

    for (int j = 0; j < N; j++)
    {
      if (i == j)
      {
        time[i][j] = 0;
      }
      time[i][j] = INF;
    }
  }

  for (int i = 0; i < M; i++)
  {
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    x -= 1;
    y -= 1;
    time[x][y] = (time[x][y] > z + timeCity[y]) ? z + timeCity[y] : time[x][y];
    time[y][x] = (time[y][x] > z + timeCity[x]) ? z + timeCity[x] : time[y][x];
  }

  for (int k = 0; k < N; k++)
  {
    for (int i = 0; i < N; i++)
    {
      for (int j = 0; j < N; j++)
      {
        if (time[i][j] > time[i][k] + time[k][j])
        {
          time[i][j] = time[i][k] + time[k][j];
        }
      }
    }
  }

  timeMin = time[0][N - 1] - timeCity[N - 1];

  printf("%d", timeMin);

  for (int i = 0; i < N; i++)
  {
    free(time[i]);
  }

  free(time);
  free(timeCity);
  return 0;
}