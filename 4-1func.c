#include <stdio.h>

int max(int a,int b,int c)
{
    int Max = a;
    
    if(b > Max) Max = b;
    if(c > Max) Max = c;
    
    return Max;
}

int min(int a,int b,int c)
{
    int Min = a;
    
    if(b < Min) Min = b;
    if(c < Min) Min = c;
    
    return Min;
}

int median(int a,int b,int c)
{
    int Min = a;
    
    if(b < Min) Min = b;
    if(c < Min) Min = c;
    
    int Median = a;
    
    if(b > Min) Median = b;
    if(Median < c) Median = c;
    
    return Median;  
}

int main(){
    int x,y,z;

    printf("１つ目の整数:"); scanf("%d",&x);
    printf("２つ目の整数:"); scanf("%d",&y);
    printf("３つ目の整数:"); scanf("%d",&z);
    
    printf("最大値は%dです",max(x,y,z));
    printf("中央値は%dです",median(x,y,z));
    printf("最小値は%dです\n",min(x,y,z));

}
