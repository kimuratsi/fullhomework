#include    <stdio.h>
#include    <stdlib.h>
#include    <ctype.h>
#include    <string.h>


int main(){
    system("cls");
    char matn[100];
    printf("matn:    ");
    fgets(matn, 100, stdin);

    FILE *f3 = fopen("3masala.BIN", "wb");
    fwrite(matn, sizeof(char), strlen(matn), f3);
    fclose(f3);

    f3 = fopen("3masala.BIN", "rb");
    char s; int n = 0;
    while (fread(&s, sizeof(char), 1, f3)){
        if (isalpha(s)){
            n++;
        }else{
            if (n <= 5 && n > 0){
                n++;
                fseek(f3, -n, SEEK_CUR);
                while (fread(&s, sizeof(char), 1, f3)){
                    if (isalpha(s)){
                        printf("%c", s);
                    }else{
                        puts("");
                        break;
                    }
                }
            }
            n = 0;
        }
    }
    fclose(f3);
    
    return 0;
}