#include <stdio.h>
#include <stdlib.h>
#define Num 10
int RingBuf[Num];
int front=0;
int rear=0;

void enqueue(int d)
{
	if ((front - rear + Num) % Num==1) {
		perror("RingBuf overflow\n");
		exit(1);
	}
	RingBuf[rear]=d;
	rear = (rear + 1) % Num;
}

int dequeue()
{
  int rv;
	if (front == rear) {
		perror("RingBuf underflow\n");
		exit(1);
	}
	rv = front;
	front = (front + 1) % Num;
	
	return front;
}

void display(){
    int k = front;
    
    while(k < rear){
        printf("%d\n",RingBuf[k]);
        k++;
    }
    //front = k;
}

int main()
{
    int i = 1;
    int j = 0;
    int data;
    
    while(i < 6){
        enqueue(i);
        i++;
    }
    display();
    
    printf("\n");
 
    while(j < 2){
        front = dequeue();
        j++;
    }
    display();
}


