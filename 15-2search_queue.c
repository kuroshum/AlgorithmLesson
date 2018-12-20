#include <stdio.h>
#include <stdlib.h>
#define Num 30
int front = 0;
int rear = 0;

struct pair_coord{
    int x;
    int y;
};

struct pair_coord RingBuf[Num];

struct pair_coord enqueue(struct pair_coord cell)
{
	if ((front - rear + Num) % Num==1) {
		perror("RingBuf overflow\n");
		cell.x = -1;
		cell.y = -1;
		return cell;
	}
	RingBuf[rear] = cell;
	rear = (rear + 1) % Num;
}

struct pair_coord dequeue()
{
  struct pair_coord cell;
	if (front == rear) {
		perror("RingBuf underflow\n");
		cell.x = -1;
		cell.y = -1;
		return cell;
	}
	cell = RingBuf[front];
	front = (front + 1) % Num;
	return cell;
}


int main()
{   
    struct pair_coord cell;
    struct pair_coord temp;
    char map[10][21];
    int k;
    int i,t,a,j,l,m;
    FILE *fp;
    
   
    
    if((fp = fopen("meiro3.txt","r")) == NULL){
        printf("\aファイルをオープンできませんでした");
    }else{
        for(i = 0;i < 10;i++){
            for(t = 0;t < 21;t++){
                map[i][t] = fgetc(fp);
                //putchar(map[i][t]);   
            }
        }
        fclose(fp);
        //printf("\n");
    }
    
    

    
    
    temp.x = 1;
    temp.y = 1;
    enqueue(temp);
    
    
    while(1){
	      cell = dequeue();
	      printf("(%d,%d)",cell.y,cell.x);//fflush(stdout);
	      
	      
	      if(map[cell.y][cell.x] == 'G'){
	         printf("goal\n");
	         break;
	      }
	      if(map[cell.y][cell.x] == '#'){
	          //temp = Stack[--top];
            continue;
        }
	      if(map[cell.y][cell.x] == '.'){
	          //temp = Stack[--top];
	          continue;
	      }
	      map[cell.y][cell.x] = '.';
	      
	      temp = cell;
	      temp.x++;
	      enqueue(temp);
	      
	      temp = cell;
	      temp.x--;
	      enqueue(temp);
	      
	      temp = cell;
	      temp.y--;
	      enqueue(temp);
	      
	      temp = cell;
	      temp.y++;
	      enqueue(temp);
	      
    }
    
    
    
    
    for(j = 0;j < 10;j++){
            for(l = 0;l < 21;l++){
                printf("%c",map[j][l]);   
            }
            //printf("\n");
        }
        
    
    
    
    return 0;
    
 }
