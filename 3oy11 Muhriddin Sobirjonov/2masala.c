#include    <stdio.h>
#include    <stdlib.h>
#include    <ctype.h>
#include    <string.h>


int main(){
    system("cls");
    char matn[100];
    printf("matn kiriting:   ");
    fgets(matn, 100, stdin);

    FILE *f2 = fopen("2masala.txt", "w");
    fprintf(f2, "%s", matn);
    fclose(f2);

    f2 = fopen("2masala.txt", "r");
    char s; int n = 0;
    while (fscanf(f2, "%c", &s) != EOF){
        if (isalpha(s)){
            n++;
        }else{
            if (n >= 4 ){
                n ++;
                fseek(f2, -n, SEEK_CUR);
                while (fscanf(f2, "%c", &s) != EOF){
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
    fclose(f2);

    return 0;
}