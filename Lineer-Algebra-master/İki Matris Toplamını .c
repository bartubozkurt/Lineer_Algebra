#include<stdio.h>
#define N 2
#define M 3

int main () {
  int a[N][M],b[N][M],c[N][M];
  int i,j;

  for(i=0;i<N;i++){         // A Matrisi
    for(j=0;j<M;j++){
      printf("a[%d][%d]",i+1,j+1);
      scanf("%d",&a[i][j]);
      }
    }
    for(i=0;i<N;i++){       // B Matrisi
      for(j=0;j<M;j++){
        printf("b[%d][%d]",i+1,j+1);
        scanf("%d",&b[i][j]);
      }
    }

      for(i=0;i<N;i++){
        for(j=0;j<M;j++){
          c[i][j] = a[i][j] + b[i][j];
	  printf("%3d",c[i][j]);
      	}
      	printf("\n");
      }


  return 0;
}
