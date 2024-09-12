#include    <stdio.h>
#include    <stdlib.h>
#include    <ctype.h>
#include    <string.h>


int main(){
    system("cls");
    char matn[100], soz[50] = "", s;
    fgets(matn, 100, stdin);
    matn[strcspn(matn, "\n")] = '\0';
   
    FILE *f4 = fopen("4masala.BIN", "wb");
    fwrite(matn, sizeof(char), strlen(matn), f4);
    fclose(f4);
   
    f4 = fopen("4masala.BIN", "rb");
    fseek(f4, -1, SEEK_END);
    int i = ftell(f4);
   
    while (i > 0){
        fread(&s, sizeof(char), 1, f4);
        if(isspace(s)){
            break;
        } 
        fseek(f4, --i , SEEK_SET);
    }
    fseek(f4, i + 1, SEEK_SET);
   
    while (fread(&s, sizeof(char), 1, f4) != '\0'){
        strncat(soz, &s, 1);
    }
    fclose(f4);
   
    printf("%s %s", soz, soz);

    return 0;
}