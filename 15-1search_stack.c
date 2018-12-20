#include <stdio.h>
#include <stdlib.h>
#define Num 200

int top = 0;

struct pair_coord{
    int x;
    int y;
};

struct pair_coord Stack[Num];



struct pair_coord push(struct pair_coord cell)
{
	if (top > Num - 1) {
		perror("Stack overflow\n");
		cell.x = -1;
		cell.y = -1;
		return cell;
	}
	Stack[top++] = cell;
}

struct pair_coord pop(/*struct pair_coord cell*/)
{
  struct pair_coord cell;
	if (top == 0) {
		perror("Stack underflow\n");
		cell.x = -1;
		cell.y = -1;
		return cell;
	}
	return Stack[--top];
}



int main()
{   
    struct pair_coord cell;
    struct pair_coord temp;
    char map[10][21];
    int k;
    int i,t,a,j,l,m;
    FILE *fp;
    
   
    
    if((fp = fopen("meiro1.txt","r")) == NULL){
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
    push(temp);
    
    
    while(1){
	      cell = pop();
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
	      push(temp);
	      
	      temp = cell;
	      temp.x--;
	      push(temp);
	      
	      temp = cell;
	      temp.y--;
	      push(temp);
	      
	      temp = cell;
	      temp.y++;
	      push(temp);
	      
	     
	      
    }
    
    
    
    
    for(j = 0;j < 10;j++){
            for(l = 0;l < 21;l++){
                printf("%c",map[j][l]);   
            }
            //printf("\n");
        }
        
    
    
    
    return 0;
    
 }
