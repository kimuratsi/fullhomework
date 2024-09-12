#include    <stdio.h>
#include    <stdlib.h>
#include    <ctype.h>
#include    <string.h>


int main(){
    system("cls");
    char matn[100];
    printf("Matn kriting:  ");
    fgets(matn, 100, stdin);
    FILE    *f1 = fopen ("1masala.txt", "w");
    fprintf(f1, "%s", matn);
    fclose(f1);

    f1 = fopen("1masala.txt", "r");
    char soz[20], s;
    int n = 0;
    while (fscanf(f1, "%c", &s)){
        if (isalpha(s)){
            n++;
        }else if(isspace(s)){
            if(n == 3){
                n++;
                fseek(f1, -n, SEEK_CUR);
                fscanf(f1, "%s", soz);
                printf("%s\n", soz);
            }
            n = 0;
        }else if(ispunct(s)){
            if(n == 3){
                n++;
                fseek(f1, -n, SEEK_CUR);
                while (fscanf(f1, "%c", &s)){
                    if(isalpha(s)){
                        printf("%c", s);
                    }else{
                        puts("");
                        exit(1);
                    }
                }
                
            }
        }
    }
    fclose(f1);

    return 0;
}