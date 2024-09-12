#include    <stdio.h>
#include    <stdlib.h>
#include    <ctype.h>
#include    <string.h>


int main(){
    system("cls");
    char matn[100], soz[50] = "", s;
    fgets(matn, 100, stdin);
    FILE    *f5 = fopen("5masala.BIN", "wb");
    fwrite(matn, sizeof(char), strlen(matn), f5);
    fclose(f5);
    int i = 0;
    f5 = fopen("5masala.BIN", "rb");
    fseek(f5, 0, SEEK_END);
    int m = ftell(f5);
    while(i < m){
        fseek(f5, i, SEEK_SET);
        fread(&s, sizeof(char), 1, f5);
        if(isspace(s)){
            break;
        }
        i++;
    }
    fseek(f5, i + 1, SEEK_SET);
    while (fread(&s, sizeof(char), 1, f5)){
        strncat(soz, &s, 1);
        if(isspace(s)){
            break;
        }
    }
    fclose(f5);
    printf("%s %s", soz, soz);
    
    return 0;
}