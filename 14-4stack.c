#include <stdio.h>
#include <stdlib.h>
#define Num 10
int Stack[Num];
int top=0;

void push(int d)
{
	if (top>Num-1) {
		perror("Stack overflow\n");
		exit(1);
	}
	Stack[top++] = d;
}

int pop()
{
	if (top==0) {
		perror("Stack underflow\n");
		exit(1);
	}
	return --top;
}

void display(){
    int k = 0;
    
    while(k < top){
        printf("%d\n",Stack[k]);
        k++;
    }
}

int main()
{
    int i = 1;
    int j = 0;
    int data;
    
    while(i < 6){
        push(i);
        i++;
    }
    display();
    
    printf("\n");
 
    while(j < 2){
        top = pop();
        j++;
    }
    display();
      
    
}


