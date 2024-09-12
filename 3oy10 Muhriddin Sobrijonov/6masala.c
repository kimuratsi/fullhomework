#include    <stdio.h>
#include    <stdlib.h>
#include    <ctype.h>
#include    <string.h>


int main(){
    system("cls");
    char matn[100], soz[50] = "", s;
    int space = 0;
    FILE *f6 = fopen("6masala.BIN", "wb");
    fgets(matn, 100, stdin);
    matn[strcspn(matn, "\n")] = '\0';
    fwrite(matn, sizeof(char), strlen(matn), f6);
    fclose(f6);

    f6 = fopen("6masala.BIN", "rb");
    fseek(f6, 0, SEEK_END);
    int ind =  ftell(f6);
    while(ind > 0){
        ind --;
        fseek(f6, ind, SEEK_SET);
        fread(&s, sizeof(char), 1, f6);
        if(isspace(s)){
            space++;
        }
        if(space == 2){
            break;
        }
    }

    fseek(f6, ind + 1, SEEK_SET);
    space = 0;
    while (fread(&s, sizeof(char), 1, f6)){
        if(isspace(s)){
                break;
        }
        strncat(soz, &s, 1);
    }
    fclose(f6);
    printf("%s %s", soz, soz);


    return 0;
}