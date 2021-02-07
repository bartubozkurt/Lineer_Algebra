#include<stdio.h>
#define N 2
#define M 3
#define P 4
int main () {
  int a[N][M],b[M][P],c[N][P];
  int i,j,k;
  for(i=0;i<N;i++)
    for(j=0;j<M;j++){
      printf("a[%d][%d]",i+1,j+1);
      scanf("%d",&a[i][j]);
    }
    for(i=0;i<M;i++)
      for(j=0;j<P;j++){
        printf("b[%d][%d]",i+1,j+1);
        scanf("%d",&b[i][j]);
      }
      for(i=0;i<N;i++)
        for(j=0;j<P;j++){
          int sum =0;

      for(k=0;k<M;k++){
        sum += a[i][k]*b[k][j];
        c[i][j] = sum;
            }
      for(i=0;i<N;i++)
        for(j=0;j<M;j++){
          printf("%6d",c[i][j]);
        }
        printf("\n");
      }
  return 0;
}
