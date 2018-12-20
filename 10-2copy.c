#include <stdio.h>

int main(void){
    int ch; 
    FILE *fp;
    FILE *fps;
    
    if((fp = fopen("anne_short.txt","r")) == NULL)
        printf("\aファイルをオープンできません\n");
    else{
        if((fps = fopen("anne_words.txt","w")) == NULL)
            printf("\aファイルをオープンできません\n");
        else{
            while((ch = fgetc(fp)) != EOF){
                if(ch != ',' && ch != '.'){
                    if(ch == ' ')
                        ch = '\n';
                    fputc(ch,fps);
               }
          }
          fclose(fps);
        }
        
        fclose(fp);
    }
    return 0;
}
