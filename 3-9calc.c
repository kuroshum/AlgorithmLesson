#include <stdio.h>

#define MAX_STUDENT 20

int main()
{
    int i,j;
    int cnt=0,cnt5=0,cnt6=0,cnt7=0,cnt8=0,cnt9=0;
    int tens[MAX_STUDENT];
    
    for(i = 0;i<MAX_STUDENT;i++)
    {
        printf("%d人目の点数を入力してください",i); scanf("%d",&j);
        if(j>100) break;
        if(j<60) cnt5++;
        if(j>=60 && j<70) cnt6++;
        if(j>=70 && j<80) cnt7++;
        if(j>=80 && j<90) cnt8++;
        if(j>=90) cnt9++;
        tens[i] = j;
        cnt++;
    }
    
    printf("60点未満の学生は%d名です\n",cnt5);
    printf("60点以上70点未満の学生は%d名です\n",cnt6);
    printf("70点以上80点未満の学生は%d名です\n",cnt7);
    printf("80点以上90点未満の学生は%d名です\n",cnt8);
    printf("90点以上の学生は%dです\n",cnt9);
    
    
}
