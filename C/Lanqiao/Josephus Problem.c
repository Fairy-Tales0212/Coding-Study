#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int n,k;
  scanf("%d  %d",&n,&k);
  int s=0;
  for(int i=2;i<=n;i++){
    s=(s+k)%i;
  }
  printf("%d",s+1);
  return 0;
}