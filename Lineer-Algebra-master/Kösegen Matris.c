#include<stdio.h>
#define N 3
int main (){
  int a[N][N],i,j;
  int kontrol=1;
 
  for(i=0;i<N;i++)
    for(j=0;j<N;j++)
    {
      printf("a[%d][%d]",i+1,j+1);
      scanf("%d",a[i][j]);
    }
    for(i=0;i<N;i++)
      for(j=0;j<N;j++)
  	{
        if( i != j && a[i][j] != 0)
		{
          kontrol=0;
          break;
        }
    }
      if(kontrol == 1)
	  {
        printf("Kosegen Matrisdir.");
      }
      else 
	  {
        printf("Kosegen matris degildir.");
      }
   
  return 0;
}
