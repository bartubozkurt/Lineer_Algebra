#include<stdio.h>
#define N 3
int main () {
  int a[N][N];
  int i,j,sum=0;

  for(i=0;i<N;i++)
    for(j=0;j<N;j++){
      printf("a[%d][%d]",i+1,j+1);
      scanf("%d",&a[i][j]);
    }
    for(i=0;i<N;i++)
	   for(j=0;j<N;j++){
         sum += a[i][j];
    }
    printf("Bu matrisin izi : %d ",sum);
    
  return 0;
}
