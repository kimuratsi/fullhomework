#include    <stdio.h>
#include    <stdlib.h>
#include    <string.h>
#include    <ctype.h>


int main(){
    system("cls");
    char matn[100];
    printf("matn:  ");
    fgets(matn, 100, stdin);
    char s,soz[50] = "";
    FILE  *f3 = fopen("3masala.BIN", "wb");
    fwrite(matn, sizeof(char), strlen(matn), f3);
    fclose(f3);
    f3 = fopen("3masala.BIN", "rb");    
    while (fread(&s, sizeof(char), 1, f3)){
        if(isalpha(s)){
            strncat(soz, &s, 1);
        }else if(isspace(s)){
            break;
            }
    }
    fclose(f3);
    printf("%s %s", soz, soz);


    return 0;
}