#include <stdio.h>

struct pair_coord{
    int x,y;
    int px,py;
};

int recursive_search(struct pair_coord p,char map[][21]){
    int i;
    char root[10][21];
    struct pair_coord temp; 
    
    if(map[p.y][p.x] == 'G'){
        return 0;
    }
    if(map[p.y][p.x] == '#'){
        return -1;
    }
    if(map[p.y][p.x] == '.'){
        return -1;
    }
    
    map[p.y][p.x] = '.';
    
    temp = p;
    temp.x++;
    i = recursive_search(temp,map);
    if(i > -1){
        return i + 1;
    }
    temp = p;
    temp.x--;
    i = recursive_search(temp,map);
    if(i > -1){
        return i + 1;
    }
    temp = p;
    temp.y--;
    i = recursive_search(temp,map);
    if(i > -1){
        return i + 1;
    }
    temp = p;
    temp.y++;
    i = recursive_search(temp,map);
    if(i > -1){
        return i + 1;
    }
    
}

int main(void){
    int i,t,a;
    FILE *fp;
    char map[10][21];
    struct pair_coord p;
    
    if((fp = fopen("meiro1.txt","r")) == NULL){
        printf("\aファイルをオープンできませんでした");
    }else{
        for(i = 0;i < 10;i++){
            for(t = 0;t < 21;t++){
                map[i][t] = fgetc(fp);
                putchar(map[i][t]);   
            }
        }
        fclose(fp);
        //printf("\n");
    }
    p.x = 1;
    p.y = 1;
    a = recursive_search(p,map);
    printf("%d\n",a);
    return 0;
}
