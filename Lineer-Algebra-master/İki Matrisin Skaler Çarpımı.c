#include<stdio.h>
#define N 2
#define M 3
#define R 3
int  main () {
  int a[N][M],b[N][M],c[N][M];
  int i,j,r;

  for(i=0;i<N;i++) {
    for (j=0;j<M;i++) {
      printf("a[%d][%d]",i+1,j+1);
      scanf("%d",&a[i][j]);
    }
  }
  for(i=0;i<N;i++) {
    for (j=0;j<M;i++) {
      printf("b[%d][%d]",i+1,j+1);
      scanf("%d",&b[i][j]);
    }
  }
  for(i=0;i<N;i++){
    for(j=0;j<M;j++){

	  c[N][M] = a[N][M] + b[N][M]*r;

	  for(i=0;i<N;i++){
        for(j=0;j<M;j++){

      printf("%6d",c[i][j]);
    }
    printf("\n");
  }

 }
}
  return 0;
}
