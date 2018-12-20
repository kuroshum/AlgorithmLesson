#include <math.h>
#include <stdio.h>

#define sqr(n) ((n)*(n))

typedef struct Point{
    double x;
    double y;
}Point;

typedef struct Triangle{
    struct Point p1;
    struct Point p2;
    struct Point p3;
}Triangle;

double distance_of(Point pa, Point pb){
    return sqrt(sqr(pa.x - pb.x) + sqr(pa.y - pb.y));
}

int main(void){
    double a,b,c;
    
    Triangle t;
    //Point p;
    
    printf("点p1のx座標:"); 
    scanf("%lf",&(t.p1.x));
    printf("点p1のy座標:"); 
    scanf("%lf",&(t.p1.y));
    printf("点p2のx座標:"); 
    scanf("%lf",&(t.p2.x));
    printf("点p2のy座標:"); 
    scanf("%lf",&(t.p2.y));
    printf("点p3のx座標:");
     scanf("%lf",&(t.p3.x));
    printf("点p3のy座標:"); 
    scanf("%lf",&(t.p3.y));
    
  //  printf("%f",distance_of(t.p1,t.p2));
    
    a = distance_of(t.p1,t.p2);
    b = distance_of(t.p1,t.p3);
    c = distance_of(t.p2,t.p3);
    
    if(a - b < 0.1 && a - c < 0.1 && b - c < 0.1)
        printf("この三角形は正三角形です\n");
    else{
        printf("この三角形は正三角形ではありません\n");
    }
        
    return 0;
}
