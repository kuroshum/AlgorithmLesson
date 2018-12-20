#include <stdio.h>

int main()
{
  int score[2][9] = {{0,0,3,0,0,1,4,1,1},{4,0,0,2,1,0,0,3,0}};
  int i,j,sum1= 0,sum2 = 0;
  
  printf("Team |");
  for(i = 1; i <10;i++)
  {
     printf("%d ",i);
  }
  printf("| Total\n");
  printf("G    |");
  
  for(i=0;i<2;i++){
    for(j=0;j<9;j++){
      printf("%d ",score[i][j]);
      sum1 = sum1 + score[0][j];
      if(i==1) sum2 = sum2 + score[1][j];
      }
      if(i==0){ printf("| %d\n",sum1); printf("T    |");}
      if(i==1) printf("| %d\n",sum2);
  }
    
}
