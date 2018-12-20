#include <stdio.h>

int main(void){
    char buf[20];
    int ch,t;
    int i = 0; 
    FILE *fp;
    FILE *fps;
    
    if((fp = fopen("anne_short.txt","r")) == NULL)
        printf("\aファイルをオープンできません\n");
    else{
        if((fps = fopen("anne_words.txt","w")) == NULL)
            printf("\aファイルをオープンできません\n");
        else{
            while((ch = fgetc(fp)) != EOF){
                buf[i] = (char)ch;
                i++;
                switch(ch){
                    case ' ' : 
                    case ',' :
                    case '.' :
                    case '\n':
                    case EOF: for(t = 0;t <= i; t++)
                                  printf("%s\n",buf[t]);
                              i = 0; break;
                    default : break;
                }
          }
          fclose(fps);
        }
        
        fclose(fp);
    }
    return 0;
}
