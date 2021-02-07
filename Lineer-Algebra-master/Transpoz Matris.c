#include<stdio.h>
#define Q 2
#define N 3
 int main () {
   int a[Q][N];
   int at[N][Q];  // Transpoz matris
   int i,j;

   for(i=0;i<Q;i++)
    for(j=0;j<N;j++){
      printf("a[%d][%d]",i+1,j+1);
      scanf("%d",&a[i][j]);
    }
    for(i=0;i<N;i++)
     for(j=0;j<Q;j++){
       at[i][j] = a[j][i];
       printf("%5d",at[i][j]);
     }
   printf("\n");
   return 0;
 }
