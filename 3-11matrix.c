#include <stdio.h>

int main()
{
   int A[2][3],B[3][2];
   int i,j,sum1=0,sum2=0,sum3=0,sum4=0;
   
   for(i=0;i<2;i++)
   {
      printf("行列A（2行3列）の%d行目を入力してください",i+1); 
      scanf("%d %d %d\n",&A[i][0],&A[i][1],&A[i][2]);
   }
   
   for(i=0;i<3;i++)
   {
      printf("行列B（3行2列）の%d行目を入力してください",i+1);
      scanf("%d %d\n",&B[i][0],&B[i][1]);
   }
   
   for(i = 0;i < 3;i++){
   sum1 = sum1 + A[0][i] * B[i][0];
   sum2 = sum2 + A[0][i] * B[i][1];
   sum3 = sum3 + A[1][i] * B[i][0];
   sum4 = sum4 + A[1][i] * B[i][1];
   }
   printf("AとBの積は以下です\n");
   printf("%d ",sum1);
   printf("%d\n",sum2);
    printf("%d ",sum3);
     printf("%d\n",sum4);
   
   
}
