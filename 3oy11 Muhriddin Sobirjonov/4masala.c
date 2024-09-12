#include    <stdio.h>
#include    <stdlib.h>
#include    <ctype.h>
#include    <string.h>


int main(){
    system("cls");
    char matn[100];
    printf("matn kiriting:    ");
    fgets(matn, 100, stdin);

    FILE *f4 = fopen("4masala.BIN", "wb");
    fwrite(matn, sizeof(char), strlen(matn), f4);
    fclose(f4);

    f4  = fopen("4masala.BIN", "rb");
    char s; int n = 0, i = 0;
    while (fread(&s, sizeof(char), 1, f4)){
        if (isalnum(s) || s == '-' || s == '_'){
            n++;
            if (isdigit(s)){
                i++;
            }
        }
        
        if (isspace(s)){
            if (n > 0 && i > 0){
                n++;
                fseek(f4, -n, SEEK_CUR);
                while (fread(&s, sizeof(char), 1, f4)){
                    if (!isspace(s)){
                        printf("%c", s);
                    }else{
                        n = 0;
                        i = 0;
                        puts("");
                        break;
                    }   
                }   
            }else{
                n = 0;
                i = 0;
            }
        }
    }
    fclose(f4);

    return 0;
}